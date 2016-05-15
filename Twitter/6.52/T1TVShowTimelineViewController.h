/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1NewEventContainerViewController.h>

@class NSString;

@interface T1TVShowTimelineViewController : T1NewEventContainerViewController {

	NSString* _showTitle;
	NSString* _episodeInfo;

}

@property (nonatomic,copy) NSString * showTitle;                //@synthesize showTitle=_showTitle - In the implementation block
@property (nonatomic,copy) NSString * episodeInfo;              //@synthesize episodeInfo=_episodeInfo - In the implementation block
-(id)initWithEventID:(id)arg1 ;
-(id)scribeParameterTimelineType;
-(id)_createHighlightsTimelineViewController;
-(id)_createCastTweetsTimelineViewControllerWithTVShowEvent:(id)arg1 ;
-(id)_createMediaTimelineViewController;
-(void)_loadShowInfo;
-(void)_setSyncdText:(id)arg1 forFirstLabel:(id)arg2 secondLabel:(id)arg3 ;
-(void)setShowTitle:(NSString *)arg1 ;
-(void)setEpisodeInfo:(NSString *)arg1 ;
-(id)_buildCastSearchQueryForCastMembers:(id)arg1 originalSearchQuery:(id)arg2 ;
-(id)_truncateCastQueryString:(id)arg1 toLength:(int)arg2 ;
-(NSString *)showTitle;
-(NSString *)episodeInfo;
-(void)setEvent:(id)arg1 ;
-(void)viewDidLoad;
-(id)headerView;
@end

