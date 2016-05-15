/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1SlideshowViewControllerDataSource.h>

@class NSArray, NSString;

@interface T1DirectMessageConversationSlideshowDataSource : NSObject <T1SlideshowViewControllerDataSource> {

	unsigned _initialSlideIndex;
	/*^block*/id _transitionObjectBlock;
	NSArray* _slideshowData;

}

@property (nonatomic,copy) NSArray * slideshowData;                   //@synthesize slideshowData=_slideshowData - In the implementation block
@property (assign,nonatomic) unsigned initialSlideIndex;              //@synthesize initialSlideIndex=_initialSlideIndex - In the implementation block
@property (nonatomic,copy) id transitionObjectBlock;                  //@synthesize transitionObjectBlock=_transitionObjectBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)numberOfSlidesInSlideshow:(id)arg1 ;
-(id)slideshow:(id)arg1 sourceObjectForSlideAtIndex:(int)arg2 ;
-(id)slideshow:(id)arg1 imageURLStringForSlideAtIndex:(int)arg2 ;
-(id)slideshow:(id)arg1 requestHydraterForSlideAtIndex:(int)arg2 ;
-(int)slideshow:(id)arg1 typeForSlideAtIndex:(int)arg2 ;
-(id)slideshow:(id)arg1 previewImageForSlideAtIndex:(int)arg2 ;
-(CGSize)slideshow:(id)arg1 imageSizeForSlideAtIndex:(int)arg2 ;
-(id)slideshow:(id)arg1 mediaForSlideAtIndex:(int)arg2 ;
-(id)slideshow:(id)arg1 mediaAssetForSlideAtIndex:(int)arg2 ;
-(id)slideshow:(id)arg1 transitionObjectForSlideAtIndex:(int)arg2 ;
-(id)transitionObjectBlock;
-(void)setTransitionObjectBlock:(id)arg1 ;
-(NSArray *)slideshowData;
-(id)initWithMediaEntrySlideshowData:(id)arg1 transitionBlock:(/*^block*/id)arg2 ;
-(unsigned)initialSlideIndex;
-(void)setInitialSlideIndex:(unsigned)arg1 ;
-(void)setSlideshowData:(NSArray *)arg1 ;
-(id)init;
@end

