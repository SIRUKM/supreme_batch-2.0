int middleElem(){
        int currentSize = size();
        if (currentSize == 0) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int mid = currentSize / 2;
        return arr[mid];
    }