//LANG : C++
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,cnt=0,a=0,b=0;
	string str="";
	cin >> n;
	for(int i=0;i<n;i++){
		a=0;b=0;
		string s;
		cin >> s;
		int x=str.size();
		for(int j=0;j<s.size();j++){
			if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') a++;
		}
		for(int j=0;j<str.size();j++){
			if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u') b++;
		}		
		if(s[0]==str[x-1]) cnt++;
		if(a==b) cnt++;
//		cout << s << ' ' << str << ' ' << x  << "\n";
		str=s;
//		cout << a << ' ' <<  b << ' ' << cnt<<"\n";
	}
	cout << cnt;
}
/*
5 
he
eat
head
dog
god
*/
/*
15
qwertyuiopolikujmyhntgbrfvedcwsxazqazwsxwsxedwrtgfwsxcvguhdtghgxf
ajfbvasubybvaksjlkfnva
asdlfnauwvbkjcxbviuabsd
blabsiubvwaiubvkjcbviuabsdkbfwiub
avbsiudbvkjcxbiuawboidfbawlduvbasuibvawkuebfvsaubv
asbkvubwiuebkcjxbaiubdvgasouhfgw
sakuvbwkjbviuwdbvkjasduqfoinv
abkvsubjcbaiwubobvuorfbks
qooqoqoqoq
jjfjfjfjfjjf
fffffffffffffffffffffffffffffffffffffffff
nvuksajnvkurnpotihiawbv
aeciouaeiocaeiocaeioca
nubviubralkjogw
hmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
*/
/*
20
toitoitotiotitoitoit
ttttttjshanbiwnosfnla
jvloiwnionadlkvnainlvbwor
nvowinfuvbxljbvaofbga
bvskufbaiuwbrvobasfubsudbvksjbfvoiwwoihfwhoag
aksudhfwkbjubvusbfgkuwbrguhsaovhcluashfkjbgskuafbvwurhgoa
baviubrkjbsdfuhqwoigbalsfuhorbgalsfbvk
aeiou
ariou
ariot
nnvnvnvnvnvnvnvnvnvnvnnvnnnnnnnnnnnnnnnnnnnnnnnnnnvvvvvvvvvvv
ppoiuytrewsdikdcuxjnhrfcyhtgvujdrujrfujrfujrfujrfujrfujrfujr
mixmiximximximximxixxiimximimximximximixmimximximximximximixmimximximximximimximxixixixmixmimx
faksldfjoihwngioasfnguearbvku
tututu
mixmixmix
plqazokwmsdxijrfcujgvhrfcjedxujszikmsx
aksdfhaiwubvlaiusfhbagwoirg
bviuwbsdkjcvibuawebfalsidhbfwoaubfksjabviuwbfkjbcxuibvwuarbvas
jfrivnasinvdkjnbxkjcbviusbdfjauiwebfksjdbviauwbdsfjkbsdviobwriufut
*/
