/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Spotify/HUBComponentWithChildren.h>
#import <Spotify/HUBComponentWithImageHandling.h>
#import <Spotify/HUBComponentViewObserver.h>

@protocol HUBComponentChildDelegate, SPTCeramicStyle, HUBComponentModel;
@class UIView, NSString, NSSet;

@interface SPTCeramicCarouselHubComponent : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, HUBComponentWithChildren, HUBComponentWithImageHandling, HUBComponentViewObserver> {

	UIView* _view;
	id<HUBComponentChildDelegate> _childDelegate;
	id<SPTCeramicStyle> _style;
	id<HUBComponentModel> _model;

}

@property (nonatomic,readonly) id<SPTCeramicStyle> style;                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) id<HUBComponentModel> model;                                     //@synthesize model=_model - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * layoutTraits; 
@property (nonatomic,retain) UIView * view;                                                   //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id<HUBComponentChildDelegate> childDelegate;              //@synthesize childDelegate=_childDelegate - In the implementation block
-(CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(CGSize)arg3 ;
-(void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(char)arg4 ;
-(CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(CGSize)arg2 ;
-(void)prepareViewForReuse;
-(void)configureViewWithModel:(id)arg1 ;
-(NSSet *)layoutTraits;
-(id<HUBComponentChildDelegate>)childDelegate;
-(void)setChildDelegate:(id<HUBComponentChildDelegate>)arg1 ;
-(id)initWithRenderType:(int)arg1 ;
-(void)viewDidResize;
-(UIView *)view;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setView:(UIView *)arg1 ;
-(void)loadView;
-(id<SPTCeramicStyle>)style;
-(id<HUBComponentModel>)model;
-(void)setModel:(id<HUBComponentModel>)arg1 ;
-(void)viewWillAppear;
@end

