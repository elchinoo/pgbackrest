/***********************************************************************************************************************************
Azure Storage Read
***********************************************************************************************************************************/
#ifndef STORAGE_AZURE_READ_H
#define STORAGE_AZURE_READ_H

#include "storage/azure/storage.intern.h"
#include "storage/read.h"

/***********************************************************************************************************************************
Constructors
***********************************************************************************************************************************/
StorageRead *storageReadAzureNew(StorageAzure *storage, const String *name, bool ignoreMissing);

#endif