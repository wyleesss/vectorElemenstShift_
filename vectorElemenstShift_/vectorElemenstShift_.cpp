#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int>& A, int K)
{
	int last = NULL;;
	for (int i = 0; i < K; i++)
		for (int i = int(A.size()) - 1; i >= 0; i--) {
			if (i == A.size() - 1) last = A[i];
			if (i == 0) {
				A[i] = last;
				break;
			}
			A[i] = A[i - 1];
		}
	

	return A;
}


int main()
{
	srand(time(NULL));
	vector <int> Vector(rand()%101);
	int n = rand() % 101, order = 0;
	cout << "shift number -> " << n << "\n\nvector before solution function'\n";
	for (auto i = Vector.begin(); i != Vector.end(); i++)
	{
		if (order % 10 == 0) cout << endl;
		*i = rand() % 1001 - rand() % 1001;
		cout << *i << "(" << order << ")" << "  ";
		order++;
	}
	order = NULL;
	cout << "\n\n\n";

	solution(Vector, n);

	cout << "vector after solution function'\n";
	for (auto i = Vector.begin(); i != Vector.end(); i++)
	{
		if (order % 10 == 0) cout << endl;
		cout << *i << "(" << order << ")" << "  ";
		order++;
	}

}