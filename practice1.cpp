#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{	
	// 1. unordered_map
	unordered_map<string, int> hashTable;

	// 2. insert
	hashTable["apple"] = 1;
	hashTable["banana"] = 2;
	hashTable["cherry"] = 3;


	// 3. find
	if(hashTable.find("apple") != hashTable.end()){
		cout << "apple is in the hashTable" << endl;
	}
	else{
		cout << "apple is not in the hashTable" << endl;
	}

	// 4. erase
	hashTable.erase("apple");


	// 5. iterate
	for(auto it = hashTable.begin(); it!= hashTable.end(); it++){
		cout<<it->first<<" "<<it->second<<endl;
	}

	// 6. size
	cout<<"size of hashTable: "<<hashTable.size()<<endl;

	// 7. clear
	hashTable.clear();

	// 8. empty
	if(hashTable.empty()){
		cout<<"hashTable is empty"<<endl;
	}
	else{
		cout<<"hashTable is not empty"<<endl;
	}

	// 9. count
	cout<<"count of apple: "<<hashTable.count("apple")<<endl;

	// 10. at
	hashTable["apple"] = 10;
	cout<<"value of apple: "<<hashTable.at("apple")<<endl;

	// 11. operator[]
	hashTable["apple"] = 20;
	cout<<"value of apple: "<<hashTable["apple"]<<endl;


	
	return 0;
}