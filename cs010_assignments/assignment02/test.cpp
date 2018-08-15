int main() 
{ 
    // create a string variable consisting of 80 dashes:

 
    
    
	int testNumber = 1;
	int checkSum1 = 1;
	int checkSum2 = 1;

	cin>>testNumber;
	cout<<testNumber;
	cout<<endl;

	int testArray[9];
for (int i = 8; i >= 0; i--) {
    testArray[i] = testNumber % 10;
    testNumber /= 10;
}
    for (int i = 8; i >= 0; i--) {
    cout<< testArray[i];
    
}
	 cout<<endl;
	checkSum1 = ((testArray[0]*1)+(testArray[1]*2)+(testArray[2]*3)+(testArray[3]*4)+(testArray[4]*5)+(testArray[5]*6)+(testArray[6]*7)+(testArray[7]*8)+(testArray[8]*9));
	checkSum2 = checkSum1 % 11;
	cout<<checkSum1;
	//cout<<testArray[8]<<testArray[7]<<testArray[6]<<testArray[5];
  cout<<endl;
   cout<<checkSum2;
  cout<<endl;
	system("pause");
  
    return 0;
}