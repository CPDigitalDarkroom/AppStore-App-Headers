/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol TFNHorizontalLabelViewDelegate, TFNHorizontalLabelViewDataSource;
@class NSMutableDictionary, UIScrollView, UIColor, UIFont, UICollectionView, NSString;

@interface TFNHorizontalLabelView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIScrollViewDelegate> {

	float _itemPadding;
	UIEdgeInsets _edgePadding;
	NSMutableDictionary* _cachedWidths;
	char _alwaysCenterSelectedItem;
	id<TFNHorizontalLabelViewDelegate> _delegate;
	id<TFNHorizontalLabelViewDataSource> _dataSource;
	UIScrollView* _scrollView;
	float _minimumItemPadding;
	int _maximumNumberOfVisibleItems;
	int _minimumNumberOfVisibleItems;
	UIColor* _textColor;
	UIColor* _highlightedTextColor;
	UIFont* _font;
	UICollectionView* _collectionView;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                   //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) id<TFNHorizontalLabelViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<TFNHorizontalLabelViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) float minimumItemPadding;                                            //@synthesize minimumItemPadding=_minimumItemPadding - In the implementation block
@property (assign,nonatomic) int maximumNumberOfVisibleItems;                                     //@synthesize maximumNumberOfVisibleItems=_maximumNumberOfVisibleItems - In the implementation block
@property (assign,nonatomic) int minimumNumberOfVisibleItems;                                     //@synthesize minimumNumberOfVisibleItems=_minimumNumberOfVisibleItems - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                 //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTextColor;                                      //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                       //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) char alwaysCenterSelectedItem;                                       //@synthesize alwaysCenterSelectedItem=_alwaysCenterSelectedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)_currentPage;
-(void)setAlwaysCenterSelectedItem:(char)arg1 ;
-(void)setMinimumItemPadding:(float)arg1 ;
-(void)scrollToPagedPosition:(float)arg1 animated:(char)arg2 ;
-(float)_widthForItemAtIndex:(int)arg1 ;
-(float)minimumItemPadding;
-(void)_recalculatePadding;
-(void)_translateScrollingFromScrollView:(id)arg1 toScrollView:(id)arg2 ;
-(char)_shouldUsePadding;
-(void)_updatePageHighlights;
-(void)_setHighlightColorOnCell:(id)arg1 forIndexPath:(id)arg2 ;
-(char)_shouldScroll;
-(char)alwaysCenterSelectedItem;
-(void)_centerBiasedTranslationFromScrollview:(id)arg1 toScrollView:(id)arg2 ;
-(void)_defaultTranslationFromScrollView:(id)arg1 toScrollView:(id)arg2 ;
-(CGPoint)_maxContentOffsetForScrollView:(id)arg1 ;
-(int)minimumNumberOfVisibleItems;
-(int)_leftPage;
-(float)_currentPercent;
-(int)_rightPage;
-(void)setMinimumNumberOfVisibleItems:(int)arg1 ;
-(CGSize)_itemSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<TFNHorizontalLabelViewDataSource>)arg1 ;
-(void)setDelegate:(id<TFNHorizontalLabelViewDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<TFNHorizontalLabelViewDataSource>)dataSource;
-(id<TFNHorizontalLabelViewDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIColor *)textColor;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(UIColor *)highlightedTextColor;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(int)maximumNumberOfVisibleItems;
-(void)setMaximumNumberOfVisibleItems:(int)arg1 ;
@end

