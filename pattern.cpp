#include <iostream>
using namespace std;
int main()
{
  //-----pattern 1
  // 1
  // 2 3
  // 4 5 6
  // int n{}, count{1};
  // cin >> n;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {
  //     cout << count << " ";
  //     count++;
  //   }
  //   cout << endl;
  // }

  //pattern 2----------
  // 1
  // 2 2
  // 3 3 3
  // 4 4 4 4
  // int n{};
  // cin >> n;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j{1}; j <= i; j++)
  //   {
  //     cout << i << " ";
  //   }
  //   cout << endl;
  // }

  //pattern 3
  /*
  ****
  ****
  ****
  */
  // int row{}, col{};
  // cin >> row >> col;
  // for (int i = 1; i <= row; i++)
  // {
  //   for (int j = 1; j <= col; j++)
  //   {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  //pattern 4
  /*
  ****
  *  *
  *  * 
  ****
  */
  // int row{}, col{};
  // cin >> row >> col;
  // for (int i = 1; i <= row; i++)
  // {
  //   for (int j = 1; j <= col; j++)
  //   {
  //     if (i == 1 || i == row || j == 1 || j == col)
  //     {
  //       cout << "* ";
  //     }

  //     else
  //     {
  //       cout << "  ";
  //     }
  //   }
  //   cout << endl;
  // }

  return 0;
}
