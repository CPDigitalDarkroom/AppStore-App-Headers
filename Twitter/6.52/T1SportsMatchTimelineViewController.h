/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1SearchStreamEventViewController.h>
#import <Twitter/T1SearchStreamEventViewControllerDelegate.h>

@class T1SportsMatchScoreCardView, T1SportDisplayHelper, NSString;

@interface T1SportsMatchTimelineViewController : T1SearchStreamEventViewController <T1SearchStreamEventViewControllerDelegate> {

	T1SportsMatchScoreCardView* _scoreCard;
	T1SportDisplayHelper* _displayHelper;

}

@property (nonatomic,retain) T1SportsMatchScoreCardView * scoreCard;              //@synthesize scoreCard=_scoreCard - In the implementation block
@property (nonatomic,retain) T1SportDisplayHelper * displayHelper;                //@synthesize displayHelper=_displayHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)searchStreamEventViewControllerDidUpdateSearchStreamWithEvent:(id)arg1 ;
-(id)scribeParameterTimelineType;
-(void)_playerTapped:(id)arg1 ;
-(id)_createHighlightsTimelineViewController;
-(id)_createOfficialController;
-(id)_createVideosTimelineViewController;
-(id)sportEvent;
-(id)_homeBadgeButton;
-(id)_homeTeamScoreButton;
-(T1SportDisplayHelper *)displayHelper;
-(id)_awayBadgeButton;
-(id)_awayTeamScoreButton;
-(T1SportsMatchScoreCardView *)scoreCard;
-(void)setScoreCard:(T1SportsMatchScoreCardView *)arg1 ;
-(void)setDisplayHelper:(T1SportDisplayHelper *)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
@end

