#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
main()
{
    // 陣列處理
    string result;
    string intput[9];

    // 輸入字串轉陣列
    cin >> intput[8] >> intput[7] >> intput[6] >> intput[5];
    cin >> intput[4] >> intput[3] >> intput[2] >> intput[1];
    cin >> intput[0];

    result = "";

    //從左邊開始處理
    for (int i = 8; i >= 0; i--)
    {
        // 0不要顯示
        if (intput[i] != "0")
        {
            // 判斷是否加入符號+，確認第1個字元是不是-
            string plu = "+";
            char c = intput[i].at(0);
            if (c == '-')
            {
                plu = "";
            }

            // 判斷是否顯示數字
            string num = "";
            if (i == 0)
            {
                num = intput[i];
            }
            else if (intput[i] != "1")
            {
                num = intput[i];
            }

            // 判斷是否顯示次方
            string fun = "";
            if (i == 0)
            {
                fun = "";
            }
            else if (i == 1)
            {
                fun = "X";
            }
            else
            {
                fun = "X^" + to_string(i);
            }
            result = result + plu + num + fun;
        }
    }

    // 輸出前，移除字串第1個字元是+
    char c = result.at(0);
    if (c == '+')
    {
        result = result.substr(1, sizeof(result) - 2);
    }

    cout << result << endl;

    /*
    Sample Input  
    0 0 0 1 22 -333 0 1 -1  
    0 0 0 0 0 0 -55 5 0  

    Sample Output  
    x^5 + 22x^4 - 333x^3 + x - 1  
    -55x^2 + 5x
    */
}