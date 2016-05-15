/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <TFNUI/TFNLayoutMetricsEnvironment.h>
#import <Twitter/T1CollectionCarouselHost.h>

@interface T1Twitter.StandardStatusCollectionCarouselView : UIView <TFNLayoutMetricsEnvironment, T1CollectionCarouselHost> {

	 delegate;
	 statusState;
	 collectionCarouselSize;
	 collectionCarousel;

}
+(char)shouldIncludeInStatusViewFor:(id)arg1 style:(int)arg2 options:(id)arg3 account:(id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(void)timelinesItemsCarouselViewController:(id)arg1 didTapCellAtIndex:(unsigned long)arg2 ;
-(id)layoutMetricsForCollectionViewLayout:(id)arg1 ;
-(void)updateCollectionCarousel:(/*^block*/id)arg1 ;
-(void)setViewModel:(id)arg1 style:(int)arg2 options:(id)arg3 account:(id)arg4 ;
-(void)unsetViewModel;
-(void)layoutMetricsDidChange:(id)arg1 ;
-(float)lengthOfLayoutGuide:(int)arg1 forEnvironment:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(CGSize)intrinsicContentSize;
@end

