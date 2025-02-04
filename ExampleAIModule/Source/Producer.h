#pragma once
#include <BWAPI.h>
#include <forward_list>

class Producer
{
private:
	std::forward_list<BWAPI::Unit> commandcentersList;
	std::forward_list<BWAPI::Unit> barracksList;
	std::forward_list<BWAPI::Unit> starportsLists;
	//std::forward_list<BWAPI::Unit> machineshopsList;
	//std::forward_list<BWAPI::Unit> armoriesList;
	std::forward_list<BWAPI::Unit> armoriesAndMS;
	std::forward_list<BWAPI::Unit> otherList;
	//std::forward_list<BWAPI::UpgradeType> upgradeResearchOrder; //queue of order for upgrade researching
	//std::forward_list<BWAPI::TechType> techResearchOrder; //queue of order for tech researching
	bool isTest = true;
	bool troopFlip = true; //determines whether goliath or seige tank gets made
	
	
	
public:
	Producer();
	std::list<BWAPI::Unit> factoriesList;
	void trainTroops();
	void trainMarines();
	void trainSCVs();
	void trainFactoryTroops();
	void research();
	void addBuilding(BWAPI::Unit unit);
	void removeBuilding(BWAPI::Unit unit);
};