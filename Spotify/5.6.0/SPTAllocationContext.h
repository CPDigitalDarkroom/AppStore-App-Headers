/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SPTAllocationContext : NSObject

@property (copy,readonly) NSString * identifier; 
@property (copy) id logHandler; 
+(void)setDefaultLogHandler:(/*^block*/id)arg1 ;
+(id)currentContext;
-(void)assertEmpty;
-(void)forgetAllObjects;
-(id)logHandler;
-(void)setLogHandler:(id)arg1 ;
-(void)enter;
-(void)exit;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

