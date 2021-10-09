#include <iostream>
#include <unistd.h>
using namespace std;

short menu()
{
  short num;
  cout << "/+/ Самостоятельные работы" << endl;
  cout << "/+/ Введите номер работы: ";
  cin >> num;
  return num;
}

short sr1()
{
  cout << "1 | Типы данных" << endl;
  int a_1 = 10;
  cout << "a_1 = " << a_1 << "\t | тип: int, размер: 4 б." << endl;
  int a_2 = 9;
  cout << "a_2 = " << a_2 << "\t\t | тип: int, размер: 4 б." << endl;
  int a_3 = 8;
  cout << "a_3 = " << a_3 << "\t\t | тип: int, размер: 4 б." << endl;
  int a_4 = 7;
  cout << "a_4 = " << a_4 << "\t\t | тип: int, размер: 4 б." << endl;
  int a_5 = 6;
  cout << "a_5 = " << a_5 << "\t\t | тип: int, размер: 4 б." << endl;
  int a_6 = 5;
  cout << "a_6 = " << a_6 << "\t\t | тип: int, размер: 4 б." << endl;
  int a_7 = 4;
  cout << "a_7 = " << a_7 << "\t\t | тип: int, размер: 4 б." << endl;
  int a_8 = 3;
  cout << "a_8 = " << a_8 << "\t\t | тип: int, размер: 4 б." << endl;
  int a_9 = 2;
  cout << "a_9 = " << a_9 << "\t\t | тип: int, размер: 4 б." << endl;
  int a_10 = 1;
  cout << "a_10 = " << a_10 << "\t | тип: int, размер: 4 б." << endl;
  float b_1 = 0.101;
  cout << "b_1 = " << b_1 << "\t | тип: float, размер: 4 б." << endl;
  float b_2 = 0.902;
  cout << "b_2 = " << b_2 << "\t | тип: float, размер: 4 б." << endl;
  float b_3 = 0.803;
  cout << "b_3 = " << b_3 << "\t | тип: float, размер: 4 б." << endl;
  float b_4 = 0.704;
  cout << "b_4 = " << b_4 << "\t | тип: float, размер: 4 б." << endl;
  float b_5 = 0.605;
  cout << "b_5 = " << b_5 << "\t | тип: float, размер: 4 б." << endl;
  float b_6 = 0.506;
  cout << "b_6 = " << b_6 << "\t | тип: float, размер: 4 б." << endl;
  float b_7 = 0.407;
  cout << "b_7 = " << b_7 << "\t | тип: float, размер: 4 б." << endl;
  float b_8 = 0.308;
  cout << "b_8 = " << b_8 << "\t | тип: float, размер: 4 б." << endl;
  float b_9 = 0.209;
  cout << "b_9 = " << b_9 << "\t | тип: float, размер: 4 б." << endl;
  float b_10 = 0.11;
  cout << "b_10 = " << b_10 << "\t | тип: float, размер: 4 б." << endl;
  short c_1 = 0;
  cout << "c_1 = " << c_1 << "\t\t | тип: short, размер: 2 б." << endl;
  short c_2 = 0;
  cout << "c_2 = " << c_2 << "\t\t | тип: short, размер: 2 б." << endl;
  short c_3 = 0;
  cout << "c_3 = " << c_3 << "\t\t | тип: short, размер: 2 б." << endl;
  short c_4 = 0;
  cout << "c_4 = " << c_4 << "\t\t | тип: short, размер: 2 б." << endl;
  short c_5 = 0;
  cout << "c_5 = " << c_5 << "\t\t | тип: short, размер: 2 б." << endl;
  short c_6 = 0;
  cout << "c_6 = " << c_6 << "\t\t | тип: short, размер: 2 б." << endl;
  short c_7 = 0;
  cout << "c_7 = " << c_7 << "\t\t | тип: short, размер: 2 б." << endl;
  short c_8 = 0;
  cout << "c_8 = " << c_8 << "\t\t | тип: short, размер: 2 б." << endl;
  short c_9 = 0;
  cout << "c_9 = " << c_9 << "\t\t | тип: short, размер: 2 б." << endl;
  short c_10 = 0;
  cout << "c_10 = " << c_10 << "\t | тип: short, размер: 2 б." << endl;
  double d_1 = 10.0001;
  cout << "d_1 = " << d_1 << "\t | тип: double, размер: 8 б." << endl;
  double d_2 = 10.0002;
  cout << "d_2 = " << d_2 << "\t | тип: double, размер: 8 б." << endl;
  double d_3 = 10.0003;
  cout << "d_3 = " << d_3 << "\t | тип: double, размер: 8 б." << endl;
  double d_4 = 10.0004;
  cout << "d_4 = " << d_4 << "\t | тип: double, размер: 8 б." << endl;
  double d_5 = 10.0005;
  cout << "d_5 = " << d_5 << "\t | тип: double, размер: 8 б." << endl;
  double d_6 = 10.0006;
  cout << "d_6 = " << d_6 << "\t | тип: double, размер: 8 б." << endl;
  double d_7 = 10.0007;
  cout << "d_7 = " << d_7 << "\t | тип: double, размер: 8 б." << endl;
  double d_8 = 10.0008;
  cout << "d_8 = " << d_8 << "\t | тип: double, размер: 8 б." << endl;
  double d_9 = 10.0009;
  cout << "d_9 = " << d_9 << "\t | тип: double, размер: 8 б." << endl;
  double d_10 = 10.001;
  cout << "d_10 = " << d_10 << "\t | тип: double, размер: 8 б." << endl;
  bool e_1 = false;
  cout << "e_1 = " << e_1 << "\t\t | тип: bool, размер: 1 б." << endl;
  bool e_2 = false;
  cout << "e_2 = " << e_2 << "\t\t | тип: bool, размер: 1 б." << endl;
  bool e_3 = false;
  cout << "e_3 = " << e_3 << "\t\t | тип: bool, размер: 1 б." << endl;
  bool e_4 = false;
  cout << "e_4 = " << e_4 << "\t\t | тип: bool, размер: 1 б." << endl;
  bool e_5 = true;
  cout << "e_5 = " << e_5 << "\t\t | тип: bool, размер: 1 б." << endl;
  bool e_6 = false;
  cout << "e_6 = " << e_6 << "\t\t | тип: bool, размер: 1 б." << endl;
  bool e_7 = false;
  cout << "e_7 = " << e_7 << "\t\t | тип: bool, размер: 1 б." << endl;
  bool e_8 = false;
  cout << "e_8 = " << e_8 << "\t\t | тип: bool, размер: 1 б." << endl;
  bool e_9 = false;
  cout << "e_9 = " << e_9 << "\t\t | тип: bool, размер: 1 б." << endl;
  bool e_10 = false;
  cout << "e_10 = " << e_10 << "\t | тип: bool, размер: 1 б." << endl;
  char f_1 = 'a';
  cout << "f_1 = " << f_1 << "\t\t | тип: char, размер: 1 б." << endl;
  char f_2 = 'z';
  cout << "f_2 = " << f_2 << "\t\t | тип: char, размер: 1 б." << endl;
  char f_3 = 's';
  cout << "f_3 = " << f_3 << "\t\t | тип: char, размер: 1 б." << endl;
  char f_4 = 'f';
  cout << "f_4 = " << f_4 << "\t\t | тип: char, размер: 1 б." << endl;
  char f_5 = 'f';
  cout << "f_5 = " << f_5 << "\t\t | тип: char, размер: 1 б." << endl;
  char f_6 = 'j';
  cout << "f_6 = " << f_6 << "\t\t | тип: char, размер: 1 б." << endl;
  char f_7 = 'n';
  cout << "f_7 = " << f_7 << "\t\t | тип: char, размер: 1 б." << endl;
  char f_8 = 'e';
  cout << "f_8 = " << f_8 << "\t\t | тип: char, размер: 1 б." << endl;
  char f_9 = 't';
  cout << "f_9 = " << f_9 << "\t\t | тип: char, размер: 1 б." << endl;
  char f_10 = 'y';
  cout << "f_10 = " << f_10 << "\t | тип: char, размер: 1 б." << endl;
  cout << "/?/ Вернуться в меню?\n/1/ Да\n/2/ Нет" << endl;
  short answer = 0;
  cin >> answer;
  return answer;
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
    system("clear");
    switch (menu())
    {
      case 1:
      {
        if (sr1() != 1)
        {
          work = false;
        }
        break;
      }
      case 2:
      {
        if (sr2() != 1)
        {
          work = false;
        }
        break;
      }
      case 3:
      {
        if (sr3() != 1)
        {
          work = false;
        }
        break;
      }
      case 4:
      {
        if (sr4() != 1)
        {
          work = false;
        }
        break;
      }
      default:
      {
        system("clear");
        cout << "/!/ Работа не найдена" << endl;
        sleep(1);
        break;
      }
    }
  }
  return 0;
}
