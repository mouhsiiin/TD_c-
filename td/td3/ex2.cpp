#include <iostream>
#include <list>

using namespace std;


void triABull(list<int>& Mylist){
    int counter=0;
    list<int>::iterator iter,Next_Iter;
    do{
        counter = 0;
        for (iter = Mylist.begin(); iter !=Mylist.end(); ++iter){
            Next_Iter = next(iter);
            if (*iter > *Next_Iter){
                counter++;
                swap(*iter,*Next_Iter);

            }
        }
    }while(counter != 0);
}
void triParSelection(list<int>& Mylist){

    list<int>::iterator iter,Next_Iter;
    for (iter = Mylist.begin(); iter !=Mylist.end(); ++iter)
    {
        for (Next_Iter = iter; Next_Iter != Mylist.end(); ++Next_Iter)
        {
            if (*iter > *Next_Iter)
            {
                swap(*iter,*Next_Iter);
            }
        }
    }

}
void triParInsertion(list<int>& Mylist){

    list<int>::iterator iter,prev_iter;
    for (iter = next(Mylist.begin()); iter !=Mylist.end(); ++iter)
    {
        prev_iter = prev(iter);
        int key = *iter;
        if (*prev_iter > key) *(next(prev_iter,1))= *prev_iter;
        while (prev_iter != prev(Mylist.begin()) && *prev_iter > key)
        {
            *(next(prev_iter,1))= *prev_iter;
            --prev_iter;
        }
        *(next(prev_iter,1)) = key;
    }

}

int main(int argc, char const *argv[])
{
    int size,item;
    list<int> Mylist;
    cout << "combien des entier tu vas entre: ";
    cin >> size;
    for (int i=0 ; i<size; i++){
        cout << "donnez le entier: ";
        cin >> item;
        Mylist.push_back(item);
    }
    triParInsertion(Mylist);//il y a trios fonction pour trier la list

    for (const int item : Mylist){
        cout << item << "  ";
    }
    return 0;
}

