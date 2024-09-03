#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int N;
   string sname;
   int score1, score2;
   ifstream ifs;

   ifs.open("students.txt");
   if (!ofs){
    cerr << "File Open Error\n";
    exit(0);
   }
   cout << "Enter the number of students: "
   cin >> N;
   ofs << N << endl;
   for(int i = 0; i < N; i++){
    cout << "Enter the student name: ";
    cin >> sname;
    cout << "Enter the student's scores: ";
    cin >> score1 >> score2;
    ofs << sname << "\t" << score1 << "\t" << score2;
}
