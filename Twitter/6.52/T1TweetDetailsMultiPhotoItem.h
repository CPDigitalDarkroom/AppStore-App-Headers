/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TFNImageTransitionDelegate, T1SlideshowPresenter;
@class TFNTwitterStatus, NSArray, TIPImagePipeline;

@interface T1TweetDetailsMultiPhotoItem : NSObject {

	TFNTwitterStatus* _status;
	NSArray* _imageURLs;
	TIPImagePipeline* _imagePipeline;
	/*^block*/id _transitionObjectBlock;
	id<TFNImageTransitionDelegate> _transitionDelegate;
	id<T1SlideshowPresenter> _slideshowPresenter;

}

@property (nonatomic,readonly) TFNTwitterStatus * status;                                           //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSArray * imageURLs;                                                 //@synthesize imageURLs=_imageURLs - In the implementation block
@property (nonatomic,readonly) TIPImagePipeline * imagePipeline;                                    //@synthesize imagePipeline=_imagePipeline - In the implementation block
@property (nonatomic,copy) id transitionObjectBlock;                                                //@synthesize transitionObjectBlock=_transitionObjectBlock - In the implementation block
@property (assign,nonatomic,__weak) id<TFNImageTransitionDelegate> transitionDelegate;              //@synthesize transitionDelegate=_transitionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<T1SlideshowPresenter> slideshowPresenter;                    //@synthesize slideshowPresenter=_slideshowPresenter - In the implementation block
+(id)tfn_defaultDataViewAdapter;
-(id)transitionObjectBlock;
-(void)setTransitionObjectBlock:(id)arg1 ;
-(id)initWithStatus:(id)arg1 imageURLs:(id)arg2 imagePipeline:(id)arg3 ;
-(void)setSlideshowPresenter:(id<T1SlideshowPresenter>)arg1 ;
-(NSArray *)imageURLs;
-(id<T1SlideshowPresenter>)slideshowPresenter;
-(TIPImagePipeline *)imagePipeline;
-(id)init;
-(id<TFNImageTransitionDelegate>)transitionDelegate;
-(void)setTransitionDelegate:(id<TFNImageTransitionDelegate>)arg1 ;
-(TFNTwitterStatus *)status;
@end

