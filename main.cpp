#include <iostream>
#include "sr1.cpp"
using namespace std;

short menu()
{
  short num;
  cout << "/+/ Самостоятельные работы" << endl;
  cout << "/+/ Введите номер работы: ";
  cin >> num;
  return num;
}

short sr2()
{
  cout << "2 | IF - ELSE" << endl;
  cout << "/+/ Программа \"Время года\"" << endl;
  cout << "\n/1/ Зима\n/2/ Весна\n/3/ Лето\n/4/ Осень\n" << endl;
  cout << "/+/ Введите значение: ";
  short time = 1;
  cin >> time;
  if (time == 1)
  {
    cout << "Сейчас зима, шапка будет очень кстати!" << endl;
  }
  else if (time == 2)
  {
    cout << "Сейчас весна, кругом одни лужи (" << endl;
  }
  else if (time == 3)
  {
    cout << "Сейчас лето, сезон комаров!" << endl;
  }
  else if (time == 4)
  {
    cout << "Золотая осень, золотые дожди!" << endl;
  }
  else
  {
    cout << "На данной планете всего лишь 4 сезона" << endl;
  }
  cout << "/?/ Вернуться в меню?\n/1/ Да\n/2/ Нет" << endl;
  short answer = 0;
  cin >> answer;
  return answer;
}

short sr3()
{
  cout << "3 | IF - ELSE" << endl;
  cout << "/!/ Выберите действие" << endl;
  cout << "\n/1/ Сложить (+)\n/2/ Вычесть (-)\n/3/ Умножить (*)\n/4/ Разделить (/)\n/5/ Остаток от деления (%)" << endl;
  cout << "Введите номер: ";
  short action;
  cin >> action;
  cout << "\nВведите перове число: ";
  short first;
  cin >> first;
  cout << "\nВведите второе число: ";
  short second;
  cin >> second;
  if (action == 1)
  {
    cout << "/+/ Результат: " << first << " + " << second << " = " << (first + second) << endl;
  }
  else if (action == 2)
  {
    cout << "/+/ Результат: " << first << " - " << second << " = " << (first - second) << endl;
  }
  else if (action == 3)
  {
    cout << "/+/ Результат: " << first << " * " << second << " = " << (first * second) << endl;
  }
  else if (action == 4)
  {
    cout << "/+/ Результат: " << first << " / " << second << " = " << (first / second) << endl;
  }
  else if (action == 5)
  {
    cout << "/+/ Результат: " << first << " % " << second << " = " << (first % second) << endl;
  }
  else
  {
    cout << "/!/ Error 404" << endl;
  }
  cout << "/?/ Вернуться в меню?\n/1/ Да\n/2/ Нет" << endl;
  short answer;
  cin >> answer;
  return answer;
}

short sr4()
{
  cout << "3 | SWITCH" << endl;
  cout << "/+/ Выберите месяц" << endl;
  cout << "/1/ Январь\n/2/ Февраль\n/3/ Март\n/4/ Апрель\n/5/ Май\n/6/ Июнь\n/7/ Июль\n/8/ Август\n/9/ Сентябрь\n/10/ Октябрь\n/11/ Ноябрь\n/12/ Декабрь\n" << endl;
  cout << "/+/ Введите номер: " << endl;
  short month;
  cin >> month;
  switch (month)
  {
    case 1:
    {
      cout << "/!/ Вы выбрали Январь!" << endl;
      break;
    }
    case 2:
    {
      cout << "/!/ Вы выбрали Февраль!" << endl;
      break;
    }
    case 3:
    {
      cout << "/!/ Вы выбрали Март!" << endl;
      break;
    }
    case 4:
    {
      cout << "/!/ Вы выбрали Апрель!" << endl;
      break;
    }
    case 5:
    {
      cout << "/!/ Вы выбрали Май!" << endl;
      break;
    }
    case 6:
    {
      cout << "/!/ Вы выбрали Июнь!" << endl;
      break;
    }
    case 7:
    {
      cout << "/!/ Вы выбрали Июль!" << endl;
      break;
    }
    case 8:
    {
      cout << "/!/ Вы выбрали Август!" << endl;
      break;
    }
    case 9:
    {
      cout << "/!/ Вы выбрали Сентябрь!" << endl;
      break;
    }
    case 10:
    {
      cout << "/!/ Вы выбрали Октябрь!" << endl;
      break;
    }
    case 11:
    {
      cout << "/!/ Вы выбрали Ноябрь!" << endl;
      break;
    }
    case 12:
    {
      cout << "/!/ Вы выбрали Декабрь!" << endl;
      break;
    }
    default:
    {
      cout << "/!/ В этой вселенной ровно 12 месяцев" << endl;
      break;
    }
  }
  cout << "/?/ Вернуться в меню?\n/1/ Да\n/2/ Нет" << endl;
  short answer;
  cin >> answer;
  return answer;
}

int main()
{
  setlocale(0,"");
  bool work = true;
  while (work) {
    switch (menu())
    {
      case 1:
      {
        if (sr1() != 1)
        {
          work = false;
        }
        system("cls");
        break;
      }
      case 2:
      {
        if (sr2() != 1)
        {
          work = false;
        }
        system("cls");
        break;
      }
      case 3:
      {
        if (sr3() != 1)
        {
          work = false;
        }
        system("cls");
        break;
      }
      case 4:
      {
        if (sr4() != 1)
        {
          work = false;
        }
        system("cls");
        break;
      }
      default:
      {
        system("cls");
        cout << "/!/ Работа не найдена" << endl;
        break;
      }
    }
  }
  return 0;
}
