/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISegmentedControl.h>

@class CALayer, NSArray;

@interface SPTTabControl : UISegmentedControl {

	char _labelsReplaced;
	CALayer* _bottomBorder;
	CALayer* _highlightLayer;
	NSArray* _labelTitles;

}

@property (nonatomic,retain) CALayer * bottomBorder;                //@synthesize bottomBorder=_bottomBorder - In the implementation block
@property (nonatomic,retain) CALayer * highlightLayer;              //@synthesize highlightLayer=_highlightLayer - In the implementation block
@property (nonatomic,retain) NSArray * labelTitles;                 //@synthesize labelTitles=_labelTitles - In the implementation block
@property (assign,nonatomic) char labelsReplaced;                   //@synthesize labelsReplaced=_labelsReplaced - In the implementation block
-(void)repositionHighlight;
-(void)highlightSelectedLabel;
-(NSArray *)labelTitles;
-(void)setLabelTitles:(NSArray *)arg1 ;
-(char)labelsReplaced;
-(void)setLabelsReplaced:(char)arg1 ;
-(void)setHighlightLayer:(CALayer *)arg1 ;
-(CALayer *)highlightLayer;
-(id)init;
-(void)layoutSubviews;
-(void)setSelectedSegmentIndex:(int)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(float)widthForSegmentAtIndex:(unsigned)arg1 ;
-(CALayer *)bottomBorder;
-(void)setBottomBorder:(CALayer *)arg1 ;
@end

