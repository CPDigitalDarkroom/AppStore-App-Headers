/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1ResizableHeaderContainerViewController.h>
#import <Twitter/T1TabbedTimelinesViewControllerDataSource.h>
#import <Twitter/T1TabbedTimelinesViewControllerDelegate.h>
#import <Twitter/T1ResizableHeaderViewControllerDelegate.h>
#import <TFNUI/TIPImageFetchDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/TFNUISearching.h>
#import <Twitter/TFNNavigationControllerTransitionProvider.h>
#import <TFNUI/TFNLayoutMetricsEnvironment.h>
#import <Twitter/T1NewEventContainerHeaderViewControllerDataSource.h>

@class TFNTwitterSearchQuery, NSString, TFNTwitterEvent, NSArray, TIPImageFetchOperation, TFNTwitterAccount;

@interface T1NewEventContainerViewController : T1ResizableHeaderContainerViewController <T1TabbedTimelinesViewControllerDataSource, T1TabbedTimelinesViewControllerDelegate, T1ResizableHeaderViewControllerDelegate, TIPImageFetchDelegate, TFNTwitterAuthenticated, TFNUISearching, TFNNavigationControllerTransitionProvider, TFNLayoutMetricsEnvironment, T1NewEventContainerHeaderViewControllerDataSource> {

	TFNTwitterSearchQuery* _searchQuery;
	NSString* _scribeParameterContext;
	NSString* _eventID;
	TFNTwitterEvent* _event;
	NSArray* _timelineViewControllers;
	NSString* _scribeParameterTimelineType;
	TIPImageFetchOperation* _fetchOperation;

}

@property (nonatomic,copy) NSString * eventID;                                      //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,retain) TIPImageFetchOperation * fetchOperation;               //@synthesize fetchOperation=_fetchOperation - In the implementation block
@property (nonatomic,retain) TFNTwitterEvent * event;                               //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSArray * timelineViewControllers;                     //@synthesize timelineViewControllers=_timelineViewControllers - In the implementation block
@property (nonatomic,readonly) NSString * scribeParameterTimelineType;              //@synthesize scribeParameterTimelineType=_scribeParameterTimelineType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account; 
@property (nonatomic,retain) TFNTwitterSearchQuery * searchQuery;                   //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,copy) NSString * scribeParameterContext;                       //@synthesize scribeParameterContext=_scribeParameterContext - In the implementation block
@property (nonatomic,readonly) unsigned searchPresentationStyle; 
@property (assign,nonatomic) char filtersEnabled; 
-(id)scribePage;
-(id)initWithEventID:(id)arg1 ;
-(void)setScribeParameterContext:(NSString *)arg1 ;
-(id)scribeSection;
-(id)scribeComponent;
-(id)resizableHeaderSubheaderViewControllersForResizableHeaderViewController:(id)arg1 ;
-(TIPImageFetchOperation *)fetchOperation;
-(void)setFetchOperation:(TIPImageFetchOperation *)arg1 ;
-(id)scribeImpressionParameters;
-(NSArray *)timelineViewControllers;
-(void)_fetchBannerImage;
-(id)_scribeEventMetadata;
-(NSString *)scribeParameterTimelineType;
-(id)tabbedViewController:(id)arg1 titleAtIndex:(int)arg2 ;
-(NSString *)scribeParameterContext;
-(id)tweetCompositionForEventContainerHeaderViewController:(id)arg1 ;
-(void)setTimelineViewControllers:(NSArray *)arg1 ;
-(id)createSearchViewControllerWithTitle:(id)arg1 searchQuery:(id)arg2 supportedSectionTypes:(unsigned)arg3 scribeSection:(id)arg4 ;
-(id)createSearchViewControllerWithTitle:(id)arg1 filterType:(unsigned)arg2 resultType:(unsigned)arg3 queryRewriteId:(id)arg4 supportedSectionTypes:(unsigned)arg5 scribeSection:(id)arg6 ;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(id)tabbedViewController:(id)arg1 viewControllerAtIndex:(int)arg2 ;
-(int)numberOfViewControllersInTabbedViewController:(id)arg1 ;
-(id)navigationControllerTransitionForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(void)imageFetchOperation:(id)arg1 didLoadFinalImage:(id)arg2 fromSource:(int)arg3 ;
-(char)imageFetchOperation:(id)arg1 shouldLoadProgressivelyWithIdentifier:(id)arg2 URL:(id)arg3 imageType:(int)arg4 originalDimensions:(CGSize)arg5 ;
-(void)imageFetchOperation:(id)arg1 didFailToLoadFinalImage:(id)arg2 ;
-(void)imageFetchOperation:(id)arg1 didUpdateProgressiveImage:(id)arg2 fromSource:(int)arg3 progress:(float)arg4 ;
-(id)scribe;
-(void)setEventID:(NSString *)arg1 ;
-(NSString *)eventID;
-(int)preferredStatusBarStyle;
-(unsigned)supportedInterfaceOrientations;
-(TFNTwitterEvent *)event;
-(void)setEvent:(TFNTwitterEvent *)arg1 ;
-(void)viewDidLoad;
-(TFNTwitterSearchQuery *)searchQuery;
-(void)setSearchQuery:(TFNTwitterSearchQuery *)arg1 ;
@end

