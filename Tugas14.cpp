/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
				Tugas ke 14
*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int jumlahGanjil, totalGanjil, jumlahGenap, totalGenap, a, b, i;
  cout << "MasukkanAngka : ";
  cin >> a;

  jumlahGanjil = 0;
  totalGanjil = 0;
  jumlahGenap = 0;
  totalGenap = 0;

  for (i = 1; i <= a; i++)
    {
      cout << "Masukkanangkake " << i << " :";
      cin >> b;
      if (b % 3 == 0 && b % 2 == 1)
	{
	  jumlahGanjil = jumlahGanjil + 1;
	  totalGanjil = totalGanjil + b;
	}
      if (b % 5 == 0 && b % 2 == 0)
	{
	  jumlahGenap = jumlahGenap + 1;
	  totalGenap = totalGenap + b;
	}
    }

  cout << "JumlahAngkaganjil yang habis di bagi 3 : " << jumlahGanjil << "\n";
  cout << "Total Angkaganjil yang habis di bagi 3 : " << totalGanjil << "\n";
  cout << "JumlahAngkaGenap yang habis di bagi 5 : " << jumlahGenap << "\n";
  cout << "Total AngkaGenap yang habis di bagi 5 : " << totalGenap << "\n";
}
