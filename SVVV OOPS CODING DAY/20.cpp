#include <iostream>
using namespace std;
class Resource {
public:
    virtual void use() = 0; 

    virtual ~Resource() {
        cout << "Resource destructor called.\n";
    }
};
class FileResource : public Resource {
public:
    void use() override {
        cout << "Using file resource.\n";
    }

    ~FileResource() override {
        cout << "FileResource destructor called.\n";
    }
};
class NetworkResource : public Resource {
public:
    void use() override {
        cout << "Using network resource.\n";
    }

    ~NetworkResource() override {
        cout << "NetworkResource destructor called.\n";
    }
};

int main() {
    
    Resource* r1 = new FileResource();
    r1->use();
    delete r1; 

    cout << endl;
    Resource* r2 = new NetworkResource();
    r2->use();
    delete r2;

    return 0;
}
