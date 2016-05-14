/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNEmojiPageViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPagingViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPagingViewDataSource.h>

@protocol MNEmojiPickerViewDelegate;
@class NSArray, FBPagingView, UIPageControl, NSString;

@interface MNEmojiPickerView : UIView <MNEmojiPageViewDelegate, FBPagingViewDelegate, FBPagingViewDataSource> {

	id<MNEmojiPickerViewDelegate> _delegate;
	NSArray* _emojiSet;
	FBPagingView* _pagingView;
	UIPageControl* _pageControl;
	int _numberOfPages;
	int _numberOfRows;
	int _numberOfColumns;

}

@property (nonatomic,copy) NSArray * emojiSet;                                           //@synthesize emojiSet=_emojiSet - In the implementation block
@property (nonatomic,retain) FBPagingView * pagingView;                                  //@synthesize pagingView=_pagingView - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                                //@synthesize pageControl=_pageControl - In the implementation block
@property (assign,nonatomic) int numberOfPages;                                          //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (assign,nonatomic) int numberOfRows;                                           //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic) int numberOfColumns;                                        //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic,__weak) id<MNEmojiPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)pagingView:(id)arg1 shouldRecycleView:(id)arg2 ;
-(void)pagingViewDidEndScroll:(id)arg1 ;
-(id)pagingView:(id)arg1 viewForPageAtIndex:(unsigned)arg2 ;
-(void)emojiPageDidClickBackspace:(id)arg1 ;
-(void)emojiPage:(id)arg1 didPickEmoji:(id)arg2 ;
-(void)setEmojiSet:(NSArray *)arg1 ;
-(NSArray *)emojiSet;
-(id)emojiSetForPage:(unsigned)arg1 ;
-(int)numberPerPage;
-(void)configureBasedOnSize:(CGSize)arg1 ;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNEmojiPickerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(int)numberOfColumns;
-(id<MNEmojiPickerViewDelegate>)delegate;
-(int)numberOfRows;
-(float)height;
-(void)_pageControlValueChanged:(id)arg1 ;
-(void)setNumberOfPages:(int)arg1 ;
-(void)setNumberOfRows:(int)arg1 ;
-(int)numberOfPages;
-(UIPageControl *)pageControl;
-(void)setNumberOfColumns:(int)arg1 ;
-(FBPagingView *)pagingView;
-(unsigned)numberOfPagesInPagingView:(id)arg1 ;
-(void)setPagingView:(FBPagingView *)arg1 ;
@end

