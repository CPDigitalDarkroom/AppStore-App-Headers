/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBObjectToSetMapDelegate;
@class NSMutableDictionary, NSSet;

@interface FBObjectToSetMap : NSObject <NSCopying> {

	unsigned _keyOptions;
	NSMutableDictionary* _map;
	unsigned _valueOptions;
	id<FBObjectToSetMapDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSSet * allKeys; 
@property (nonatomic,copy,readonly) NSSet * allValues; 
@property (assign,nonatomic) id<FBObjectToSetMapDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned keyCount; 
@property (nonatomic,readonly) unsigned objectCount; 
-(id)initWithKeyOptions:(unsigned)arg1 valueOptions:(unsigned)arg2 ;
-(char)containsObjectsForKey:(id)arg1 ;
-(unsigned)objectCount;
-(void)_removeAllObjectsForAllKeys:(char)arg1 ;
-(void)_enumerateDictionary:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_setForKey:(id)arg1 ;
-(void)_notifyDelegateDidRemoveObjects:(id)arg1 forKey:(id)arg2 ;
-(char)removeAllObjectsForKey:(id)arg1 ;
-(void)_enumerateSet:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_notifyDelegateDidRemoveAllObjectsFromMap:(id)arg1 ;
-(unsigned)keyCount;
-(char)addObjects:(id)arg1 forKey:(id)arg2 ;
-(char)containsObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllObjectsForAllKeys;
-(void)enumerateObjectsForKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id<FBObjectToSetMapDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id<FBObjectToSetMapDelegate>)delegate;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)allValues;
-(id)objectsForKey:(id)arg1 ;
-(char)removeObject:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateKeysUsingBlock:(/*^block*/id)arg1 ;
@end

