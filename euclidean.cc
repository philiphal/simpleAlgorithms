#include<iostream>
#include<cstdlib>
#include<vector>

// a = qn+r;
// r = a-qn
// q = floor(a/n)

int main(int argc,char**argv)
{

system("clear");

float gcfA, gcf_1, gcfB, gcf_2;


int i=0;

std::vector<float> a;
std::vector<int> q;
std::vector<float> n;
std::vector<int> r;


std::cout<<"\n\t Please enter two integer values to find their greatest common factor \n\n\t (1) --> ";
std::cin>>gcf_1;

std::cout<<"\n\t (2) --> ";
std::cin>>gcf_2;

	if(gcf_1<gcf_2)
		{
			std::swap(gcf_1,gcf_2);	
		}


gcfA=gcf_1;
gcfB=gcf_2;

	
	while(i<5)
	{
		
		a.push_back(gcf_1);
		n.push_back(gcf_2);
		q.push_back(a.at(i)/n.at(i));
		r.push_back(a.at(i) - (int(q.at(i))*n.at(i)));
		
	
		std::cout<<"\n\t"<<a.at(i)<<" = ("<<q.at(i)<<") ("<<n.at(i)<<") + "<<r.at(i);	
		
		i++;
		
		gcf_1=n.at(i-1);
		gcf_2=r.at(i-1);
		
			if(r.at(r.size()-1) == 0)
				{
		
					break;
				}
	
	}

std::cout<<"\n\n\t gcf("<<gcfA<<","<<gcfB<<") = "<<r.at(r.size()-2);
std::cout<<"\n\n";

return 0;
}

