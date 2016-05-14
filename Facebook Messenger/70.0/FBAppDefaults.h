/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBKeyValueDataStore.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBInvalidating.h>

@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface FBAppDefaults : NSObject <FBKeyValueDataStore, FBInvalidating> {

	NSObject*<OS_dispatch_source> _timer;
	char _invalidated;
	char _protectionDisabled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) char valid; 
+(id)appDefaults;
-(void)_scheduleSynchronize;
-(void)_disableDataProtectionIfNeeded;
-(double)doubleForKey:(id)arg1 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setInteger:(int)arg1 forKey:(id)arg2 ;
-(id)arrayForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(NSString *)debugDescription;
-(id)objectForKey:(id)arg1 ;
-(void)invalidate;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(float)floatForKey:(id)arg1 ;
-(void)synchronize;
-(char)isValid;
-(char)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(char)arg1 forKey:(id)arg2 ;
-(int)integerForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clear;
-(id)dictionaryForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
@end

