
// vowel or consonent or no. of vowels and others in string
#include<iostream>
using namespace std;
void str(string x){// function 
    int v=0,n=0;
for(int i=0;i<x[i]!='\0';i++){
    char c;
        if((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z')){
        c=x[i];
    if(c == 'a'||c =='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        cout<<c<<" is vovel \n";v++;
    }else{
        cout<<c<<" is not a vovel \n";n++;
    }
    }else{
    cout<<x[i]<<" is invalid character to check vowel "; 
}
}
    cout <<" total num of vowel = "<<v<<"\n";
    cout <<" total num of non vowel = "<<n<<"\n";

}
void chr(char c){
    
    if((c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z')){
    if(c == 'a'||c =='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        cout<<"\n\t"<<c<<" is vovel \n";
    }else{
        cout<<"\n\t"<<c<<" is not a vovel \n";
    }
}else{
    cout<<"invalid character "; 
}
}
int main(){
    strt: string x;
    cout<<"enter a character or a string: ";
    getline(cin,x);
    char c;
    
    if (x[1]!='\0'){
        cout<<"\n\tmake sure you're entering a single character, not a string \nif you want check how many num of vowel in a sentence or paragraph type\'A\'\n else type \"a character to check\" \n";
        cin>>c;
        if(c=='A'){
        str(x) ;
    }}else{
        chr(c);
    }
     char u;
cout<<"do you want to check again?\n type \'y\' to check again else type any thing";
cin >>u;
if (u=='y'){
    goto strt;
}else{
    return 0;
}
}