#include <iostream>
using namespace std;

class absList {
protected:
    int dataId;

public:
    absList(int pID = 0) {
        dataId = pID;
    }

    virtual ~absList() {}

    int getData() {
        return dataId;
    }

    virtual absList* addFirst(int pID) = 0;
    virtual absList* getSubItem() = 0;
    virtual void showAll(ostream&) = 0;
    virtual int countAll() {
        return 0;
    }
};

class simpleList : public absList {
public:
    simpleList(int pId) : absList(pId) {}

    virtual absList* addFirst(int pId) {
        dataId = pId;
        return this;
    }

    virtual absList* getSubItem() {
        return NULL;
    }

    virtual void showAll(ostream& outDev) {
        outDev << dataId << " ";
    }

    virtual int countAll() {
        return 1;
    }
};

class linearList : public absList {
    absList* subLst;

public:
    linearList(int pId) : absList(pId) {
        subLst = NULL;
    }

    virtual ~linearList() {
        if (subLst != NULL) {
            delete subLst;
        }
    }

    virtual absList* addFirst(int pId) {
        linearList* Lst = new linearList(pId);
        Lst->subLst = this;
        return Lst;
    }

    virtual absList* getSubItem() {
        return subLst;
    }

    virtual void showAll(ostream& outDev) {
        for (absList* temp = this; temp; temp = temp->getSubItem()) {
            outDev << temp->getData() << " ";
        }
        outDev << endl;
    }

    int countAll() {
        int count = 0;
        for (absList* temp = this; temp; temp = temp->getSubItem()) {
            count++;
        }
        return count;
    }
};

int main() {
    absList* lnkst = new linearList(37);
    for (int i = 1; i <= 8; i++) {
        lnkst = lnkst->addFirst(i * i - 7 * i);
    }
    delete lnkst;
    return 0;
}
