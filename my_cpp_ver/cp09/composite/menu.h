#ifndef _MENU_H_
#define _MENU_H_
#include "menu_comp.h"
#include <vector>
#include <iterator>
#include <iostream>
using namespace std;
class menu:public menu_comp
{
public:
	menu(string n, string d):name(n), description(d){}
	~menu(){}
	void add(menu_comp * m_c){
		menu_comps.push_back(m_c);
	}
	void remove(menu_comp * m_c){
		vector<menu_comp *>::iterator itr = menu_comps.begin();
		while(itr != menu_comps.end()){
			if((*itr) == m_c){
				menu_comps.erase(itr);
			}
			else{
				itr ++;
			}
		}
	}
	menu_comp *get_child(int i){
		return (menu_comp *)menu_comps.at(i);
	}
	string get_name(){
		return name;
	}
	string get_description(){
		return description;
	}
	void print(){
		cout<<get_name()<<endl;
		cout<<", "<< get_description()<<endl;
		cout<<"--------------"<<endl;
		vector<menu_comp *>::iterator itr = menu_comps.begin();
		while(itr != menu_comps.end()){
			(*itr)->print();
			itr ++;
		}
	}
private:
	string name;
	string description;
	vector <menu_comp *> menu_comps;
};
#endif
