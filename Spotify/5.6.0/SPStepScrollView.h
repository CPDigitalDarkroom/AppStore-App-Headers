/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SPStepScrollViewDelegate, SPStepScrollViewDataSource;
@class NSMutableSet, NSMutableDictionary, NSString;

@interface SPStepScrollView : UIScrollView <UIScrollViewDelegate> {

	char _needsReloadData;
	char _needsReloadConstraints;
	char _preventUnloading;
	int _stepsLeft;
	int _stepsRight;
	id<SPStepScrollViewDelegate> _stepDelegate;
	id<SPStepScrollViewDataSource> _dataSource;
	NSMutableSet* _loadedPageViews;
	NSMutableDictionary* _queuedPageViews;
	CGRect _previousFrame;

}

@property (assign,nonatomic,__weak) id<SPStepScrollViewDelegate> stepDelegate;              //@synthesize stepDelegate=_stepDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SPStepScrollViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSMutableSet * loadedPageViews;                                //@synthesize loadedPageViews=_loadedPageViews - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * queuedPageViews;                         //@synthesize queuedPageViews=_queuedPageViews - In the implementation block
@property (assign,nonatomic) CGRect previousFrame;                                          //@synthesize previousFrame=_previousFrame - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLoadedPageViews:(NSMutableSet *)arg1 ;
-(void)setQueuedPageViews:(NSMutableDictionary *)arg1 ;
-(void)setNeedsReloadData;
-(void)reloadConstraintsRestoreOffset:(char)arg1 ;
-(NSMutableSet *)loadedPageViews;
-(NSMutableDictionary *)queuedPageViews;
-(float)originOffset;
-(CGRect)frameForPageAtRelativeIndex:(int)arg1 ;
-(int)currentRelativePageIndex;
-(id<SPStepScrollViewDelegate>)stepDelegate;
-(CGRect)previousFrame;
-(char)setRelativeIndex:(int)arg1 animated:(char)arg2 ;
-(void)setPreviousFrame:(CGRect)arg1 ;
-(void)queuePageView:(id)arg1 ;
-(id)pageViewAtRelativeIndex:(int)arg1 ;
-(void)notifyAndUpdate;
-(id)visiblePageViews;
-(void)reloadConstraints;
-(void)clearReusePageViewQueue;
-(id)dequeReusablePageViewWithIdentifier:(id)arg1 relativeIndex:(int)arg2 ;
-(void)setStepDelegate:(id<SPStepScrollViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<SPStepScrollViewDataSource>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SPStepScrollViewDataSource>)dataSource;
-(void)didMoveToSuperview;
-(void)update;
@end

