/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSSet, NSEnumerator, FBObjectiveCGraphElement;

@interface FBNodeEnumerator : NSEnumerator {

	NSSet* _retainedObjectsSnapshot;
	NSEnumerator* _enumerator;
	FBObjectiveCGraphElement* _object;

}

@property (nonatomic,readonly) FBObjectiveCGraphElement * object;              //@synthesize object=_object - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(FBObjectiveCGraphElement *)object;
-(id)nextObject;
-(id)initWithObject:(id)arg1 ;
@end

