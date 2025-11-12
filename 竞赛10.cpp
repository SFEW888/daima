//#include <iostream>
//using namespace std;
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if(a == 1)
//    {
//        if(b == 2)
//            cout << "hehe" << endl;
//        else
//            cout << "haha" << endl;
//    }
//    return 0;
//}
 
 
 
 
//#include <iostream>
//using namespace std;
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if(a == 1)
//    {
//        if(b == 2)
//            cout << "hehe" << endl;
//    }
//    else
//    {
//         cout << "haha" << endl;
//    }
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	cin >> m >> n;
//	if(m % n == 0)
//	   cout << "YES\n" << endl;
//	else
//	   cout << "NO\n" << endl;
//	   return 0;   
//}




//#include<iostream>
//using namespace std;
//
//int main()
//{
//	long long x = 0;
//	long long y = 0;
//	cin >> x >> y;
//	if(x > y)
//	  cout << ">" << endl;
//	else if(x == y)
//	  cout << "=" << endl;
//	else 
//	  cout << "<" << endl;
//	return 0;      
// } 




//#include<iostream>
//using namespace std;
//
//int main()
//{
//	float n = 0;
//	scanf("%f", &n);
//	if(n >= 0)
//	  printf("%.2f\n", n);
//	else
//	  printf("%.2f\n", -n);
//	return 0;    
// } 




//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//    float n = 0;
//    scanf("%f", &n);
//    n = fabs(n);
//    printf("%.2f\n", n);
//    return 0;
//}




//#include<iostream> 
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	if(n % 2)
//	  cout << "odd" << endl;
//	else
//	  cout << "even" << endl;
//	return 0;   
//}



 
//#include <iostream>
//using namespace std;
//int main()
//{
//    double a = 0.1;
//    double b = 0.2;
//    double c = 0.3;
//    if (a + b == c) 
//        cout << "a + b == c" << endl;
//    else
//        cout << "a + b != c" << endl;
//        return 0;
//}
 
 
 
 
// #include <iostream>
// #include <cmath> 
//using namespace std;
//int main()
//{
//    double a = 0.1;
//    double b = 0.2;
//    double c = 0.3;
//    if (fabs((a + b) - c) < 1e-9)   // 1e-9 表示允许的误差范围 
//        cout << "a + b 约等于 c" << endl;
//    else 
//        cout << "a + b 不等于 c" << endl;
//        return 0;
//}
 
 
 
 
// #include <iostream>
// using namespace std;
// 
// int main()
// {
// 	int s1, s2, s3;
// 	cin >> s1 >> s2 >> s3;
// 	if(s1 >= 60)
// 	  cout << 1 << endl;
// 	else
//	  cout << 0 << endl;  
//	if(s2 >= 60)
// 	  cout << 1 << endl;
// 	else
//	  cout << 0 << endl; 
//	if(s3 >= 60)
// 	  cout << 1 << endl;
// 	else
//	  cout << 0 << endl;     
// 	
// 	return 0;
//  } 
 
 
 
// #include <iostream>
//using namespace std;
//int main()
//{
//    int s1, s2, s3;
//    int c = 0;
//    cin >> s1 >> s2 >> s3;
//    if (s1 < 60)
//        c++;
//    if (s2 < 60)
//        c++;
//    if (s3 < 60)
//        c++;
//    if (c == 1)
//        cout << 1 << endl;
//    else
//        cout << 0 << endl;
//    return 0;
//}
// 
 
 
 
 
 
// #include <iostream>
//using namespace std;
// 
// int main()
//{
//    int s1, s2, s3;
//    int c = 0;
//    cin >> s1 >> s2 >> s3;
//    if ((s1 < 60) + (s2 < 60) + (s2 < 60) == 1)
//        cout << 1 << endl;
//    else
//        cout << 0 << endl;
//    return 0;
//}



//#include <iostream>
//using namespace std;
////改造前：未使用条件操作符 
//int main()
//{
//    int a = 0;
//    int b = 0;
//    cin >> a;
//    if (a > 5)
//        b = 3;
//    else 
//        b = -3;
//    cout << b << endl;
//    return 0;
//}
 
 
 
 
 
// //改造后：使用了条件操作符 
//#include <iostream>
//using namespace std;
//int main()
//{
//    int a = 0;
//    int b = 0;
//    cin >> a >> b;
//    b = (a > 5 ? 3 : -3);
//    cout << b << endl;
//    return 0;
//}
 
 
 
 
 #include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int m = 0;
    cin >> a >> b >> c;
    m = (a > b ? a : b);
    if (m < c)
        m = c;
    cout << m << endl;
    return 0;
}
 
 
 
 
 
 
 
 
 
