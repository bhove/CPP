#include <iostream> #include <iomanip>
using namespace std; int main(){int egg,segg,degg;double dprice,sprice,price;cout<<"Enter number of egg: ";cin>>egg;degg=egg/12;segg=egg%12;if(degg<4){dprice=0.50;}else if(degg<6){dprice=0.45;}else if(degg<11){dprice=0.40;}else{dprice=0.35;}sprice=dprice / 12;price=(degg*dprice)+(segg*sprice);cout<<"Your cost is $"<<fixed<<setprecision(2)<<dprice<<" per dozen or $"<<fixed<<setprecision(2)<<sprice<<" per egg. ";cout<<"Your bill comes to $"<<fixed<<setprecision(2)<<price;return 0;}
