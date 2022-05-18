#ifndef PROIECT3_REPOSITORY_H
#define PROIECT3_REPOSITORY_H
#include <iostream>
#include <vector>

template <class Entity>
class Repository{
public:
    void adauga(Entity& entity) {
        mEntities.push_back(entity);
    }
    void sterge(Entity& entity){
        typename std::vector<Entity>::iterator it;
        for (it=mEntities.begin(); it!=mEntities.end();it++) {
            if (*it == entity) {
                mEntities.erase(it);
                break;
            }
        }
    }
    Entity getEntity(int i) {
        return mEntities[i];
    }
protected:
    std::vector<Entity> mEntities;
};

#endif //PROIECT3_REPOSITORY_H
