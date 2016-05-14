/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPhotoTagGuideTagletDelegate;
@class NSMutableArray, FBUserSession, FBPhotoTagGuideTaglet, FBTagContainerView, NSArray;

@interface FBTagAggregator : NSObject {

	float _minimumScale;
	float _maximumScale;
	NSMutableArray* _photoTaglets;
	FBUserSession* _session;
	id<FBPhotoTagGuideTagletDelegate> _delegate;
	float _scale;
	FBPhotoTagGuideTaglet* _tagGuideTaglet;
	FBTagContainerView* _view;
	NSArray* _tagletsCommitted;
	NSArray* _tagletsGenerated;

}

@property (nonatomic,retain) NSArray * tagletsCommitted;                                     //@synthesize tagletsCommitted=_tagletsCommitted - In the implementation block
@property (nonatomic,retain) NSArray * tagletsGenerated;                                     //@synthesize tagletsGenerated=_tagletsGenerated - In the implementation block
@property (assign,nonatomic,__weak) id<FBPhotoTagGuideTagletDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float scale;                                                    //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) char dirty; 
@property (nonatomic,readonly) char generated; 
@property (nonatomic,readonly) float minimumScale;                                           //@synthesize minimumScale=_minimumScale - In the implementation block
@property (nonatomic,readonly) float maximumScale;                                           //@synthesize maximumScale=_maximumScale - In the implementation block
@property (nonatomic,readonly) FBPhotoTagGuideTaglet * tagGuideTaglet;                       //@synthesize tagGuideTaglet=_tagGuideTaglet - In the implementation block
@property (nonatomic,retain) FBTagContainerView * view;                                      //@synthesize view=_view - In the implementation block
-(void)setScale:(float)arg1 animated:(char)arg2 ;
-(void)setTagletsGenerated:(NSArray *)arg1 ;
-(void)removeAllTaggableEdges;
-(void)removeTagGuide;
-(void)setTagletsCommitted:(NSArray *)arg1 ;
-(void)_setScaleState;
-(void)addTaggableEdge:(id)arg1 ;
-(void)addPhotoTaglet:(id)arg1 ;
-(void)removeTaggable:(id)arg1 ;
-(void)removeAllTaglets;
-(id)findTagletByTaggbleEdge:(id)arg1 ;
-(void)addTagGuideForFacebox:(id)arg1 ;
-(char)generated;
-(void)generateAggregatedTagletsWithMinimumScale:(float)arg1 maximumScale:(float)arg2 ;
-(void)adjustScaleWithMultiplier:(float)arg1 ;
-(void)commitWithAnimation:(unsigned)arg1 ;
-(FBPhotoTagGuideTaglet *)tagGuideTaglet;
-(NSArray *)tagletsCommitted;
-(NSArray *)tagletsGenerated;
-(id)initWithSession:(id)arg1 ;
-(void)setDelegate:(id<FBPhotoTagGuideTagletDelegate>)arg1 ;
-(id<FBPhotoTagGuideTagletDelegate>)delegate;
-(FBTagContainerView *)view;
-(void)setScale:(float)arg1 ;
-(void)setView:(FBTagContainerView *)arg1 ;
-(float)scale;
-(float)maximumScale;
-(float)minimumScale;
-(void)setDirty:(char)arg1 ;
-(char)dirty;
-(void)refresh;
@end

