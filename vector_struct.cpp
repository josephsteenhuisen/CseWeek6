#include "vector_struct.h"
using namespace std;


vector<int_vector> output_function(const string file_name) {
    vector<int_vector> vector_of_vector;
    ifstream infile(file_name);
    if(infile) {
        string s, irst, last;
        int count = 0;
        while(getline(infile, s)) {
            stringstream ss(s);
            getline(s, first, ' ');
            getline(s,last, ' ');
            int begin, end;
            begin = stoi(first);
            end = stoi(last);
            int_vector v;
            v.id = count;
            //cout << "this is v.id == " << v.id << endl;
            v.from = begin;
            //cout << "this is v.from == " << v.from << endl;
            v.to = end;
            //cout << "this is v.to == " << v.to << endl;
            vector_of_vector.push_back(v);
            // cout << "id: " << v.id << " from: " << v.from << " to: " << v.to << endl;
            count++;
        } 
    }
    reverse(vector_of_vector.begin(), vector_of_vector.end());
    for(int i = 0; i < vector_of_vector.size(); i++) {
        cout << "Vector " << vector_of_vector[i].id << ": " << vector_of_vector[i].from << " " << vector_of_vector[i].to << endl;
    }
    ;
}
