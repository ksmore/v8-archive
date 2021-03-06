#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


#import "DRCTSGetActivityDataManagedObject.h"
#import "DRCTSGetActivityData.h"

/**
* directus.io
* API for directus.io
*
* OpenAPI spec version: 1.1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


@interface DRCTSGetActivityDataManagedObjectBuilder : NSObject



-(DRCTSGetActivityDataManagedObject*)createNewDRCTSGetActivityDataManagedObjectInContext:(NSManagedObjectContext*)context;

-(DRCTSGetActivityDataManagedObject*)DRCTSGetActivityDataManagedObjectFromDRCTSGetActivityData:(DRCTSGetActivityData*)object context:(NSManagedObjectContext*)context;

-(void)updateDRCTSGetActivityDataManagedObject:(DRCTSGetActivityDataManagedObject*)object withDRCTSGetActivityData:(DRCTSGetActivityData*)object2;

-(DRCTSGetActivityData*)DRCTSGetActivityDataFromDRCTSGetActivityDataManagedObject:(DRCTSGetActivityDataManagedObject*)obj;

-(void)updateDRCTSGetActivityData:(DRCTSGetActivityData*)object withDRCTSGetActivityDataManagedObject:(DRCTSGetActivityDataManagedObject*)object2;

@end
