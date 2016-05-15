/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1ItemsDataModulesViewController.h>
#import <Twitter/T1BusinessProfileMediaListModuleDelegate.h>
#import <Twitter/T1SlideshowViewControllerDataSource.h>

@protocol T1ProfileBusinessInfoViewControllerDelegate, T1BusinessProfileDataSource;
@class T1ProfileTopTweetsItem, T1ProfileFeaturedMediaItem, T1ProfileLatestTweetsItem, T1ProfileTweetTimelineItem, TFNTwitterScribeContext, TFNTwitterUserBusinessProfile, NSString;

@interface T1ProfileBusinessInfoViewController : T1ItemsDataModulesViewController <T1BusinessProfileMediaListModuleDelegate, T1SlideshowViewControllerDataSource> {

	T1ProfileTopTweetsItem* _topTweetsItem;
	T1ProfileFeaturedMediaItem* _featuredMediaItem;
	T1ProfileLatestTweetsItem* _latestTweetsItem;
	T1ProfileTweetTimelineItem* _tweetsTimelineItem;
	TFNTwitterScribeContext* _scribeContext;
	id<T1ProfileBusinessInfoViewControllerDelegate> _businessInfoControllerDelegate;
	id<T1BusinessProfileDataSource> _businessProfileDataSource;

}

@property (nonatomic,readonly) TFNTwitterUserBusinessProfile * businessProfile; 
@property (nonatomic,readonly) id<T1BusinessProfileDataSource> businessProfileDataSource;                                        //@synthesize businessProfileDataSource=_businessProfileDataSource - In the implementation block
@property (nonatomic,readonly) T1ProfileTopTweetsItem * topTweetsItem;                                                           //@synthesize topTweetsItem=_topTweetsItem - In the implementation block
@property (nonatomic,readonly) T1ProfileFeaturedMediaItem * featuredMediaItem;                                                   //@synthesize featuredMediaItem=_featuredMediaItem - In the implementation block
@property (nonatomic,readonly) T1ProfileLatestTweetsItem * latestTweetsItem;                                                     //@synthesize latestTweetsItem=_latestTweetsItem - In the implementation block
@property (nonatomic,readonly) T1ProfileTweetTimelineItem * tweetsTimelineItem;                                                  //@synthesize tweetsTimelineItem=_tweetsTimelineItem - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeContext * scribeContext;                                                            //@synthesize scribeContext=_scribeContext - In the implementation block
@property (assign,nonatomic,__weak) id<T1ProfileBusinessInfoViewControllerDelegate> businessInfoControllerDelegate;              //@synthesize businessInfoControllerDelegate=_businessInfoControllerDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)scribePage;
-(TFNTwitterScribeContext *)scribeContext;
-(id)scribeSection;
-(void)setScribeContext:(TFNTwitterScribeContext *)arg1 ;
-(int)numberOfSlidesInSlideshow:(id)arg1 ;
-(id)slideshow:(id)arg1 statusForSlideAtIndex:(int)arg2 ;
-(id)slideshow:(id)arg1 imageURLStringForSlideAtIndex:(int)arg2 ;
-(int)slideshow:(id)arg1 typeForSlideAtIndex:(int)arg2 ;
-(TFNTwitterUserBusinessProfile *)businessProfile;
-(id)scribeImpressionParameters;
-(id)buildModules;
-(id)scribeImpressionParametersForIndexPath:(id)arg1 ;
-(id)scribeItemForIndexPath:(id)arg1 ;
-(void)imagesModule:(id)arg1 didSelectImageAtIndex:(int)arg2 slideshowSource:(int)arg3 ;
-(T1ProfileLatestTweetsItem *)latestTweetsItem;
-(T1ProfileFeaturedMediaItem *)featuredMediaItem;
-(T1ProfileTopTweetsItem *)topTweetsItem;
-(T1ProfileTweetTimelineItem *)tweetsTimelineItem;
-(id<T1BusinessProfileDataSource>)businessProfileDataSource;
-(char)_isTweet:(id)arg1 ;
-(id)initWithBusinessProfileDataSource:(id)arg1 account:(id)arg2 ;
-(id<T1ProfileBusinessInfoViewControllerDelegate>)businessInfoControllerDelegate;
-(void)setBusinessInfoControllerDelegate:(id<T1ProfileBusinessInfoViewControllerDelegate>)arg1 ;
-(id)scribe;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

