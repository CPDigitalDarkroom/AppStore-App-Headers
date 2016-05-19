/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPAction.h>

@class NSURL, SPTPlaylistReportAbuseManager;

@interface SPTPlaylistReportAbuseAction : SPAction {

	NSURL* _entityURL;
	SPTPlaylistReportAbuseManager* _reportAbuseManager;

}

@property (nonatomic,retain) NSURL * entityURL;                                                      //@synthesize entityURL=_entityURL - In the implementation block
@property (assign,nonatomic,__weak) SPTPlaylistReportAbuseManager * reportAbuseManager;              //@synthesize reportAbuseManager=_reportAbuseManager - In the implementation block
-(NSURL *)entityURL;
-(void)setEntityURL:(NSURL *)arg1 ;
-(id)logEventName;
-(char)executeBeforeDismiss;
-(void)setReportAbuseManager:(SPTPlaylistReportAbuseManager *)arg1 ;
-(SPTPlaylistReportAbuseManager *)reportAbuseManager;
-(id)initEntityURL:(id)arg1 logContext:(id)arg2 reportAbuseManager:(id)arg3 ;
-(id)title;
-(id)image;
-(int)style;
-(id)execute:(id)arg1 ;
@end

