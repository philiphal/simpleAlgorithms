// Simple iterative Fibonacci sequence generator 
// Compile Directive: g++ fibonacci.cc -o fibonacci


#include<iostream>
#include<cstdlib>
#include<vector>


void showFibonnacci(int loopSize)
{
		std::vector<int>seqVect;
		std::cout<<"\n\t Fibonacci Sequence:\n\n";

	for(int i=0;i<loopSize;++i)
		{

			if(i<2)
			{
				seqVect.push_back(i);
			}
	
			else
			{
				seqVect.push_back(seqVect.at(i-2)+seqVect.at(i-1));
			}
		}

	for(int j=0;j<seqVect.size();++j)
		{
			 std::cout<<"\n At position "<<j+1<<" in sequence: "<<seqVect.at(j);
		}

std::cout<<"\n\n";

}



int main(int argc,char**argv)
{

system("clear");

int seqCount;

std::cout<<"\n\t Please enter the number of iterations for the Fibonacci sequence..? \n\n\t --> ";
std::cin>>seqCount;
showFibonnacci(seqCount);




return 0;
}


