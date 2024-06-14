

#include <iostream>
#include <string>
#include <vector>
#include <queue>


using namespace std;

void ahoy(){
	
	system("COLOR 6");
	
		printf("\n\n====================TUGAS PERTEMUAN 11====================\n\n");
	
		string n("RIFANDY ARNAS");
		string i("232310001");
		string k("TI-23-PA ");
		string tg("13 Juni 2024 ");
		string v("14 Juni 2024 ");
		string m("Design dan Analisis Algoritma");
		
		k.append("(LAB 2)");
		tg.append("(Pembuatan Script)");
		v.append("(Penulisan Google Docs)");
		
			cout<<"Nama\t: "<<n;
			cout<<"\nNIM\t: "<<i;
			cout<<"\nKelas\t: "<<k;
			cout<<"\n\nMatkul\t: "<<m;
			cout<<"\nTanggal\t: "<<tg<<"||"<<v;
	
		printf("\n\n>>>>>>>>>>>>>>>>>>>Dijkstra Algorithm<<<<<<<<<<<<<<<<<<<\n\n");
	
}


typedef pair<int, int> iPair;


class Lamy_Graph{
	
    int V; 
    
    vector<vector<iPair>> adj; 

	public:
		
	    Lamy_Graph(int V) : V(V), adj(V) {}
	
	    void tambah_penghubung(int u, int v, int w){
	    	
	        adj[u].push_back(make_pair(v, w));
	        
	        adj[v].push_back(make_pair(u, w)); 
	        
	    }
	
	    void dijkstra(int hoshikawa){
	        
	        priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
	        
	        vector<int> dist(V, INT_MAX);
	 
	        pq.push(make_pair(0, hoshikawa));
	        
	        dist[hoshikawa] = 0;
	
	        while(!pq.empty()){
	            
	            int u = pq.top().second;
	            
	            pq.pop();
	 
	            for(const auto &hello_neighbor : adj[u]){
	            	
	                int v = hello_neighbor.first;
	                
	                int berat = hello_neighbor.second;	
	                
	                if(dist[v] > dist[u] + berat){
	                    
	                    dist[v] = dist[u] + berat;
	                    
	                    pq.push(make_pair(dist[v], v));
	                    
	                }
	                
	            }
	            
	        }
	
	        cout<<"\tVertex\t\tDistance from Source"<<endl;
	        
	        for(int i=0; i<V; i++)
	        
	            cout<<"\t   "<<i<<"\t\t\t   " <<dist[i]<<endl;
	    }
};


struct Node{ 
  
    int kotonoha_bango; //bango adalah angka
    
    int kotonoha_kyori; //kyori adalah jarak
    
    bool operator>(const Node& others) 
	
	const{
		
        return kotonoha_kyori > others.kotonoha_kyori;
    }
    
};


void dijkstra_bagian2(const vector<vector<pair<int, int>>>& graph, int source){
	
    int p = graph.size();
    
    vector<int>dist2(p, INT_MAX);
    
    vector<int>parent(p, -1);
    
    priority_queue<Node, vector<Node>, greater<Node>>pq;
    
    dist2[source] = 0;
    
    pq.push({source, 0});
    
    while(!pq.empty()){
    	
        int moona_hoshinova = pq.top().kotonoha_bango;
        
        pq.pop();
        
        for(const auto& secret_neighbor : graph[moona_hoshinova]){
        	
            int kaela_kovalskia = secret_neighbor.first;
            
            int berat2 = secret_neighbor.second;
            
            if(dist2[moona_hoshinova] + berat2 < dist2[kaela_kovalskia]){
            	
                dist2[kaela_kovalskia] = dist2[moona_hoshinova] + berat2;
                
                pq.push({kaela_kovalskia, dist2[kaela_kovalskia]});
                
                parent[kaela_kovalskia] = moona_hoshinova;
                
            }
            
        }
        
    }
    
    cout<<"Node\tDistance\tJalur terpendek (dimulai dari node 1)"<<endl;
    
    for(int i=1; i<p; i++){
    	
        cout<<"  "<<i<<"\t  "<<dist2[i]<<"\t";
        
        vector<int> path;
        
        for(int kaela_kovalskia = i; kaela_kovalskia != -1; kaela_kovalskia = parent[kaela_kovalskia])
        
            path.push_back(kaela_kovalskia);
        
        	cout<<"\t\t  ";
            
        for(int j = path.size() - 1; j>=0; j--)
        
            cout<<path[j]<<(j != 0 ? " -> " : "");
            
        cout<<endl;
        
    }
    
}


int main(){
	
system("cls");

	ahoy();
	
	main_menu:
		
		int marine_choise;
		
			cout<<"Program List: ";
			cout<<"\n\n[1]Modaete yoo~ Adam kun";
			cout<<"\n\n[2]Kotonoha no Niwa";
			cout<<"\n\n[3]EXIT";
				
			cout<<endl<<endl;
				
			cout<<"Pilihan kamu [1/2/3/?]: "; 
				
			cin>>marine_choise;
			
				if(marine_choise<1 || marine_choise>3){
						
					cout<<endl<<endl;
					
					int ukuran=7500;
					
					int rukojouma_no_rikyakusha; int kanojo_ga_rokuden;
			
						kanojo_ga_rokuden=1;
			
						rukojouma_no_rikyakusha=2;
							
							for(int i=0; i<=ukuran; i++){
									
								cout<<"[ERROR PROGRAM!]";
									
								cout<<endl;
									
							}
							
							system("cls");
					
							system("COLOR B");
					
							cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
							cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					
								while(kanojo_ga_rokuden < rukojouma_no_rikyakusha){
									
									cout<<"MOSHIKOSHITAKEDEIATOSHIKOSHITAKEDEI";
									cout<<"URESHIKITEKENAKUNOWA KANASHITEKUWARAUN";
									cout<<"KIMINOKOKOROGAKIMIOOSHIKOSHITANDAYO";
									
									kanojo_ga_rokuden--;
									
								}
								
				}
				
				else if(marine_choise==1){
					
					system("cls");
					
					system("COLOR 3");
					
						printf("\n\n==============================================================================\n");
			
						printf("Irasshaimase~~");
						
						printf("\n==============================================================================\n\n");
						
						printf("\n\n==============================================================================\n");
						
						printf("Modaete yoo~ Adam kun");
						
						printf("\n==============================================================================\n\n");
					
							int V=9;
							
    						Lamy_Graph g(V);
    						
    							g.tambah_penghubung(0, 1, 4);
							    g.tambah_penghubung(0, 7, 8);
							    g.tambah_penghubung(1, 2, 8);
							    g.tambah_penghubung(1, 7, 11);
							    g.tambah_penghubung(2, 3, 7);
							    g.tambah_penghubung(2, 8, 2);
							    g.tambah_penghubung(2, 5, 4);
							    g.tambah_penghubung(3, 4, 9);
							    g.tambah_penghubung(3, 5, 14);
							    g.tambah_penghubung(4, 5, 10);
							    g.tambah_penghubung(5, 6, 2);
							    g.tambah_penghubung(6, 7, 1);
							    g.tambah_penghubung(6, 8, 6);
							    g.tambah_penghubung(7, 8, 7);
							    
							    	g.dijkstra(0);
						
						printf("\n==============================================================================\n\n");
						
							string type;
							
								cout<<"Do you want to leave the program? [yes/no]";
								
								cout<<endl<<endl;
								
								cout<<"please type [yes] or [no]\t: ";
								
								cin>>type;
								
									if(type=="yes"||type=="Yes"||type=="YES"){
										
										goto exit_modaete;
										
									}
									
									else{
										
										system("cls");
										
										system("COLOR B");
										
											cout<<endl<<endl;
										
												goto main_menu;
										
									}
					
					exit_modaete:
						
						system("cls");
						
						cout<<"\n\n\n\n\n\n";
						
						exit(0);
							 
				}
				
				else if(marine_choise==2){
					
					system("cls");
					
					system("COLOR 2");
					
						printf("\n\n==============================================================================\n");
			
						printf("Irasshaimase~~");
						
						printf("\n==============================================================================\n\n");
						
						printf("\n\n==============================================================================\n");
						
						printf("Kotonoha no Niwa [Modul halaman 87]");
						
						printf("\n==============================================================================\n\n");
					
							int p=7; 
							
							vector<vector<pair<int, int>>> graph(p);
							
								graph[1].push_back({2, 7});
							    graph[1].push_back({3, 9});
							    graph[1].push_back({6, 14});
							    graph[2].push_back({1, 7});
							    graph[2].push_back({3, 10});
							    graph[2].push_back({4, 15});
							    graph[3].push_back({1, 9});
							    graph[3].push_back({2, 10});
							    graph[3].push_back({4, 11});
							    graph[3].push_back({6, 2});
							    graph[4].push_back({2, 15});
							    graph[4].push_back({3, 11});
							    graph[4].push_back({5, 6});
							    graph[5].push_back({4, 6});
							    graph[5].push_back({6, 9});
							    graph[6].push_back({1, 14});
							    graph[6].push_back({3, 2});
							    graph[6].push_back({5, 9});
							
							int source = 1;
							
							dijkstra_bagian2(graph, source);
						
						printf("\n==============================================================================\n\n");
						
							string type;
							
								cout<<"Do you want to leave the program? [yes/no]";
								
								cout<<endl<<endl;
								
								cout<<"please type [yes] or [no]\t: ";
								
								cin>>type;
								
									if(type=="yes"||type=="Yes"||type=="YES"){
										
										goto exit_kotonohaNoNiwa;
										
									}
									
									else{
										
										system("cls");
										
										system("COLOR B");
										
											cout<<endl<<endl;
										
												goto main_menu;
										
									}
					
					exit_kotonohaNoNiwa:
						
						system("cls");
						
						cout<<"\n\n\n\n\n\n";
						
						exit(0);
					
				}
				
				else if(marine_choise==3){
					
					system("cls");
						
					cout<<"\n\n\n\n\n\n";
						
					exit(0);
					
				}



cin.get();

return 0;

	
}



































