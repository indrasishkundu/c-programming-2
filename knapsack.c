#include <stdio.h>
int cw,maxi,used[10],n,c[10],v[10],w,i;
float tv;
	void simplefill(){
		//int cw,maxi,used[10],n,c[10],v[10],w,i;
		//float tv;
		for(i=0;i<n;i++){
			used[i];
		}
		cw=w;
		while(cw>0){
			maxi=-1;
			for(i=0;i<n;i++)
			{
				if((used[i]==0 )&&((maxi==-1)||((float)(v[i]/c[i])>(float)(v[maxi]/c[maxi]))))
		  		{
					maxi=i;
				}
				used[maxi]=1;
				cw=cw-c[maxi];
				tv=tv+v[maxi];
			if(cw>=0){
				printf("Added object %d,%d $,%d KG completely in the bag,space left %d",(maxi+1),v[maxi],c[maxi],cw);
			}
			else{
			float fl=(cw/c[maxi])*100;
			printf("Added %d %d$ % kG of object %d in the bag \n",(fl),v[maxi],c[maxi],(maxi+1));
			
			tv=tv-v[maxi];
			tv=tv+(1+(float)cw/c[maxi])*v[maxi];
			}
		}
		printf("Filled the bag with objects worth %f",tv);
	}
}

	main(){
		
		printf("Enter the max weight capacity of bag-->\n");
		scanf("%d",&w);
		printf("Enter the no of items-->\n");
		scanf("%d",&n);
		for(i=0;i<n;i++){
			printf("Enter the cost of items-->");
			scanf("%d",&c[i]);
	       printf("Enter the value of items-->");
			scanf("%d",&v[i]);
		}
		simplefill();
		return 0;
	}

