#include <iostream>
// Serap Erçel 180290003 kesirli sayılarda 4 işlem
using namespace std;
float kesirislemleri(float payx, float paydax,char isaret, float payy, float payday){
if(isaret=='+'){
    float sonuc=(payx/paydax)+(payy/payday);
    return sonuc;
}
else if(isaret=='-'){
    float sonuc=(payx/paydax)-(payy/payday);
    return sonuc;
}
else if(isaret=='*'){
    float sonuc=(payx/paydax)*(payy/payday);
    return sonuc;
}
else if(isaret=='/'){
    float sonuc=(payx/paydax)/(payy/payday);
    return sonuc;
}
else{
    return 0;
}
}
int main(){
float payx,paydax,payy,payday;
char isaret;
cout<<"Sirasiyla ilk sayinin payini ve paydasini giriniz.."<<endl;
cin>> payx>> paydax;
cout<<"Isleminizin isaretini giriniz.."<<endl;
cin>>isaret;
cout<<"Sirasiyla ikinci sayinin payini ve paydasini giriniz.."<<endl;
cin>>payy>>payday;
cout<<payx<<" "<<payy<<endl;
cout<<"-"<<isaret<<"-="<<kesirislemleri(payx,paydax,isaret,payy,payday)<<endl;
cout<<paydax<<" "<<payday<<endl;

return 0;
}
