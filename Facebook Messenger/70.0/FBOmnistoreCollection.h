/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@interface FBOmnistoreCollection : NSObject {

	shared_ptr<facebook::omnistore::Collection>* _collection;

}
-(id)newCursorFromGetObjectWithPrimaryKey:(id)arg1 ;
-(char)saveObjectWithPrimaryKey:(id)arg1 withSortKey:(id)arg2 withBytes:(const void*)arg3 withLength:(unsigned)arg4 ;
-(id)newCursorFromQueryWithStartKey:(id)arg1 sortDirection:(unsigned)arg2 withNumItems:(unsigned)arg3 ;
-(id)newCursorFromQueryWithIndexSorted:(id)arg1 fieldNamesWithTokens:(id)arg2 sortFieldName:(id)arg3 sortDirection:(unsigned)arg4 numItems:(unsigned)arg5 ;
-(id)newCursorFromQueryWithIndexSorted:(id)arg1 paramValues:(id)arg2 sortFieldName:(id)arg3 sortDirection:(unsigned)arg4 numItems:(unsigned)arg5 ;
-(id)newCursorFromQueryWithIndexSorted:(id)arg1 filterKeys:(id)arg2 sortFieldName:(id)arg3 sortDirection:(unsigned)arg4 numItems:(unsigned)arg5 ;
-(id)newCursorFromQueryWithIndex:(id)arg1 paramValues:(id)arg2 numItems:(unsigned)arg3 ;
-(unsigned)getSnapshotState;
-(id)initWithCollection:(shared_ptr<facebook::omnistore::Collection>*)arg1 ;
-(char)reindexAllObjects;
-(char)deleteObject:(id)arg1 ;
@end

