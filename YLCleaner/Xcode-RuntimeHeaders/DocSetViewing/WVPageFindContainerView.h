/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class WVPageFindController, WVPageFindWebView;

@interface WVPageFindContainerView : NSView
{
    WVPageFindWebView *_webView;
    WVPageFindController *_controller;
}

@property(retain, nonatomic) WVPageFindController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) WVPageFindWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) WVPageFindController *pageFindController;

@end

