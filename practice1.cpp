#include<iostream>
#include<map>
using namespace std;
// I will be learnign map implementaiton in this code 
// I will be learning about the map in this code
// step wise implementation of map
int main()
{
	// 1. Create a map
	map<string, int> myMap;

	// 2. Insert elements in the map 
	myMap["apple"] = 10;
	myMap["banana"] = 20;
	myMap["cherry"] = 30;

	// 3. Access elements of the map
	cout << "before updataion: " << myMap["apple"] << endl;

	// 4. Update elements of the map
	myMap["apple"] = 40;
	cout <<"after Updataion : "<< myMap["apple"] << endl;

	// 5. Delete elements of the map
	myMap.erase("apple");

	myMap["dd"] = 50;// new insertion on the map is always at last

	// 6. Check if an element is present in the map
	if(myMap.find("apple")== myMap.end()){
		cout << "apple is not present in the map" << endl;
	}
	else{
		cout << "apple is present in the map" << endl;
	}

	// 7. Iterate over the map
	for(auto it = myMap.begin(); it != myMap.end(); it++){
		cout<<it->first << " " << it->second <<endl;
	}

	// 8. Size of the map
	cout << "Size of the map is : " << myMap.size() << endl;

	// 9. Clear the map
	myMap.clear();
	cout << "Size of the map after clearing is : " << myMap.size() << endl;

	// 10. Check if the map is empty
	if(myMap.empty()){
		cout<<"map is empty" << endl;
	}else{
		cout<<"map is not empty" << endl;
	}

	// 11. Multimap
	multimap<string, int> myMultiMap;
	myMultiMap.insert({"apple", 10});
	myMultiMap.insert({"apple", 20});
	myMultiMap.insert({"banana", 30});
	myMultiMap.insert({"cherry", 40});


	// 12. Iterate over the multimap
	for(auto it = myMultiMap.begin(); it!= myMultiMap.end(); it++){
		cout<<it->first <<" "<< it->second << endl;
	}

	// 13. Size of the multimap
	cout << "Size of the multimap is : " << myMultiMap.size() << endl;







	return 0;
}