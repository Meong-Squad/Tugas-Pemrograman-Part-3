//Tugas ke 14
int main()
{
int jumlah1,total1,jumlah2,total2,a,b,i;
	cout<< "MasukkanAngka : ";
cin>> a;
   jumlah1=0;
   total1=0;
   jumlah2=0;
   total2=0;
for(i = 1; i<= a ; i++){
	cout<< "Masukkanangkake "<<i<<" :";
	cin>> b;
	if(b%3==0 && b%2==1){
		jumlah1 = jumlah1 + 1;
		total1 = total1 + b;
	   }
if(b%5==0 && b%2==0){
	jumlah2 = jumlah2 + 1;
	total2 = total2 + b;	
	   } 	
}
	cout<< "JumlahAngkaganjil yang habis di bagi 3 : " << jumlah1 << "\n";
	cout<< "Total Angkaganjil yang habis di bagi 3 : " << total1 << "\n";
	cout<< "JumlahAngkaGenap yang habis di bagi 5 : " << jumlah2 << "\n";
	cout<< "Total AngkaGenap yang habis di bagi 5 : " << total2 << "\n";
	

}
