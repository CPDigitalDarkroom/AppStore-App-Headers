/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTCrashReporterPersistentStore.h>
#import <Spotify/SPTCrashReporterURLPoster.h>

@class NSString;

@interface SPTWebEndpointCrashStatisticsReporterDefaultProvider : NSObject <SPTCrashReporterPersistentStore, SPTCrashReporterURLPoster>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)postURL:(id)arg1 timeout:(double)arg2 error:(out id*)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
@end

