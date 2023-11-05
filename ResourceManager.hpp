#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:

    ResourceManager() : resource(new Resource) {}

    ~ResourceManager() {delete resource;}

    ResourceManager& operator=(const ResourceManager& d)
    {
        delete resource;
        resource = new Resource(d.resource);
        
        return *this;
    }

    ResourceManager& operator=(const ResourceManager& d)
    {   
        delete resource;
        resource = d.resource;
        
        return *this;
    }

    double get()
    {
        return Resource.get();
    }

    private:

    Resource*resource;

};
