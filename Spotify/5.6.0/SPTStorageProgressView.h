/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface SPTStorageProgressView : UIView {

	NSArray* _colorArray;
	NSArray* _percentArray;
	NSArray* _shapeLayerArray;
	NSArray* _maskLayerArray;

}

@property (nonatomic,copy,readonly) NSArray * colorArray;                //@synthesize colorArray=_colorArray - In the implementation block
@property (nonatomic,copy,readonly) NSArray * percentArray;              //@synthesize percentArray=_percentArray - In the implementation block
@property (nonatomic,retain) NSArray * shapeLayerArray;                  //@synthesize shapeLayerArray=_shapeLayerArray - In the implementation block
@property (nonatomic,retain) NSArray * maskLayerArray;                   //@synthesize maskLayerArray=_maskLayerArray - In the implementation block
-(id)reverseArray:(id)arg1 ;
-(NSArray *)colorArray;
-(NSArray *)percentArray;
-(void)setShapeLayerArray:(NSArray *)arg1 ;
-(void)setMaskLayerArray:(NSArray *)arg1 ;
-(NSArray *)shapeLayerArray;
-(void)initPathLayers;
-(void)layoutPathsAnimated:(char)arg1 ;
-(id)calculatedPercentArray;
-(NSArray *)maskLayerArray;
-(id)initWithFrame:(CGRect)arg1 colorArray:(id)arg2 percentArray:(id)arg3 ;
-(void)setPercentArray:(id)arg1 animated:(char)arg2 ;
-(void)layoutSubviews;
@end

