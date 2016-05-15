/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@interface T1OnboardingFacetedGridCollectionLayout : UICollectionViewLayout {

	float _computedSpacing;
	CGSize _computedSize;
	unsigned _columnCount;
	float _spacing;
	float _aspectRatio;

}

@property (assign,nonatomic) unsigned columnCount;              //@synthesize columnCount=_columnCount - In the implementation block
@property (assign,nonatomic) float spacing;                     //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) float aspectRatio;                 //@synthesize aspectRatio=_aspectRatio - In the implementation block
-(CGRect)_frameForItemAtIndex:(int)arg1 ;
-(float)aspectRatio;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(unsigned)columnCount;
-(void)setColumnCount:(unsigned)arg1 ;
-(void)setSpacing:(float)arg1 ;
-(float)spacing;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)setAspectRatio:(float)arg1 ;
@end

